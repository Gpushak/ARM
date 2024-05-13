#pragma once
#include "Base.h"

namespace Manage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ManageForm
	/// </summary>
	public ref class ManageForm : public System::Windows::Forms::Form
	{
	public:
		ManageForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ManageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ sendButton;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tableNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderName;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ OrderStatus;

	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderStatus = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->tableNumber,
					this->OrderNumber, this->OrderName, this->OrderStatus
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(459, 210);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManageForm::dataGridView1_CellContentClick);
			// 
			// tableNumber
			// 
			this->tableNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->tableNumber->HeaderText = L"Номер столика";
			this->tableNumber->MinimumWidth = 8;
			this->tableNumber->Name = L"tableNumber";
			// 
			// OrderNumber
			// 
			this->OrderNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->OrderNumber->HeaderText = L"Номер заказа";
			this->OrderNumber->MinimumWidth = 8;
			this->OrderNumber->Name = L"OrderNumber";
			// 
			// OrderName
			// 
			this->OrderName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->OrderName->HeaderText = L"Название блюда";
			this->OrderName->MinimumWidth = 8;
			this->OrderName->Name = L"OrderName";
			// 
			// OrderStatus
			// 
			this->OrderStatus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->OrderStatus->HeaderText = L"Готовность";
			this->OrderStatus->MinimumWidth = 8;
			this->OrderStatus->Name = L"OrderStatus";
			// 
			// sendButton
			// 
			this->sendButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->sendButton->Location = System::Drawing::Point(489, 12);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(124, 65);
			this->sendButton->TabIndex = 1;
			this->sendButton->Text = L"Отправить";
			this->sendButton->UseVisualStyleBackColor = false;
			this->sendButton->Click += gcnew System::EventHandler(this, &ManageForm::sendButton_Click);
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(489, 94);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(124, 56);
			this->updateButton->TabIndex = 2;
			this->updateButton->Text = L"Обновить";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &ManageForm::updateButton_Click);
			// 
			// ManageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(646, 429);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->sendButton);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ManageForm";
			this->Text = L"ManageForm";
			this->Load += gcnew System::EventHandler(this, &ManageForm::ManageForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ManageForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Base b;
		List<ClassNames^>^ namesList = b.FillTable();
		dataGridView1->Rows->Clear();
		for (int i = 0; i < namesList->Count; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = namesList[i]->NumberTable;
			dataGridView1->Rows[i]->Cells[1]->Value = namesList[i]->NumberOrder;
			dataGridView1->Rows[i]->Cells[2]->Value = namesList[i]->NameFood;
			dataGridView1->Rows[i]->Cells[3]->Value = namesList[i]->Status;
		}
	}
	private: System::Void sendButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Base b;
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			// Приводим значение к типу bool и проверяем, равно ли оно true
			bool readiness;
			if (Boolean::TryParse(dataGridView1->Rows[i]->Cells[3]->Value->ToString(), readiness) && readiness)
			{
				// Изменяем значение в базе данных
				String^ numOrder = dataGridView1->Rows[i]->Cells[1]->Value->ToString(); // Получаем Номер заказа
				String^ newStatus = "Completed";
				b.UpdateStatusInDatabase(numOrder, newStatus);
			}
		}
	}
};
}
