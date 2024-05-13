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
				String^ readiness = reader["Готовность"]->ToString();
				if (readiness->Equals("Completed", StringComparison::InvariantCultureIgnoreCase)) {
					n->status = true;
				}
				else {
					n->status = false;
				}
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

public:
	void UpdateStatusInDatabase(String^ numOrder, String^ newStatus)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "UPDATE dbo.Orders SET Готовность = @Readiness WHERE [Номер заказа] = @numOrder";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
	
			cmd->Parameters->AddWithValue("@Readiness", newStatus);
			cmd->Parameters->AddWithValue("@numOrder", numOrder);

			conn->Open();
			cmd->ExecuteNonQuery();
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
