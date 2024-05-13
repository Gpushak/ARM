#pragma once
#include "ClassNames.h"
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class Base
{
	public:
		Base();

		SqlConnection^ conn;
		SqlConnectionStringBuilder^ connStringBuilder;

		void ConnectToDB()
		{
			connStringBuilder = gcnew SqlConnectionStringBuilder();
			connStringBuilder->DataSource = "DESKTOP-QDGFT6I\\SQLEXPRESS";
			connStringBuilder->InitialCatalog = "OrderTrackingDB";
			connStringBuilder->IntegratedSecurity = true;

			conn = gcnew SqlConnection(connStringBuilder->ConnectionString);
		}

	public:
		void InsertData(String^ Table, String^ Number, String^ Name, String^ Status)
		{
			try
			{
				ConnectToDB();

				String^ cmdText = "INSERT INTO dbo.Orders([Номер столика], [Номер заказа], [Название блюда], [Готовность]) VALUES(@TableVstavka, @NumberVstavka, @NameVstavka, @StatusVstavka)";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@TableVstavka", Table);
				cmd->Parameters->AddWithValue("@NumberVstavka", Number);
				cmd->Parameters->AddWithValue("@NameVstavka", Name);
				cmd->Parameters->AddWithValue("@StatusVstavka", Status);

				conn->Open();
				cmd->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				// Обработка исключения, например, вывод ошибки
				Console::WriteLine("Ошибка при выполнении запроса: " + ex->Message);
			}
			finally
			{
				conn->Close();
			}
		}


	public:
		void Update(String^ Number, String^ newStatus)
		{
			try
			{
				ConnectToDB();

				String^ cmdText = "UPDATE dbo.Orders SET Готовность = @Readiness WHERE [Номер заказа] = @OrderNumber";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				cmd->Parameters->AddWithValue("@Readiness", newStatus);
				cmd->Parameters->AddWithValue("@OrderNumber", Number);

				conn->Open();
				cmd->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				// Обработка исключения, например, вывод ошибки
				Console::WriteLine("Ошибка при выполнении запроса: " + ex->Message);
			}
			finally
			{
				conn->Close();
			}
		}

	public:
		void DeleteData(String^ Number)
		{
			try
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Orders WHERE [Номер заказа] = @NumberToDelete";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@NumberToDelete", Number);

				conn->Open();
				cmd->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				// Обработка исключения, например, вывод ошибки
				Console::WriteLine("Ошибка при выполнении запроса: " + ex->Message);
			}
			finally
			{
				conn->Close();
			}
		}

	public:
		List<ClassNames^>^ Base::FillTable()
		{
			List<ClassNames^>^ namesList = gcnew List<ClassNames^>();
			try
			{
				ConnectToDB();
				String^ cmdText = "SELECT * FROM dbo.Orders";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					ClassNames^ n = gcnew ClassNames();
					n->numbertable = reader["Номер столика"]->ToString();
					n->numberorder = reader["Номер заказа"]->ToString();
					n->namefood = reader["Название блюда"]->ToString();
					n->status = reader["Готовность"]->ToString();
					
					namesList->Add(n);
				}
				return namesList;
			}
			finally
			{
				if (conn != nullptr)
				{
					conn->Close();
				}
			}
		}
};

