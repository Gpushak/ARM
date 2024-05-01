#pragma once
#include <vcclr.h>
#include <vector>
#include <string>
#include "DishSelectionForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OrderTrackingForm
	/// </summary>
	public ref class OrderTrackingForm : public System::Windows::Forms::Form
	{
	public:
		OrderTrackingForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			orders = gcnew System::Collections::Generic::List<String^>();
			filteredOrdersStatus = gcnew System::Collections::Generic::List<String^>();
			filteredOrders = gcnew System::Collections::Generic::List<String^>();
			this->Load += gcnew System::EventHandler(this, &OrderTrackingForm::OrderTrackingForm_Load);

			availableDishes = gcnew System::Collections::Generic::List<String^>();
			availableDishes->Add("Яйца девственного мальчика");
			availableDishes->Add("Гамбо по Луизиански");
			availableDishes->Add("Ширако");
			availableDishes->Add("Сеульский Бибимбап");
			availableDishes->Add("Дим-Самы");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~OrderTrackingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ filterButton;
	private: System::Windows::Forms::ComboBox^ statusComboBox;
	private: System::Windows::Forms::DataGridView^ orderDataGridView;

	protected:
	private:
		System::Collections::Generic::List<String^>^ orders;
		System::Collections::Generic::List<String^>^ filteredOrdersStatus;
		System::Collections::Generic::List<String^>^ filteredOrders;
	
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Collections::Generic::List<String^>^ availableDishes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ MenuButton;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderTrackingForm::typeid));
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->filterButton = (gcnew System::Windows::Forms::Button());
			this->statusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->orderDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(321, 299);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(141, 58);
			this->AddButton->TabIndex = 0;
			this->AddButton->Text = L"Добавить заказ";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::AddButton_Click);
			// 
			// filterButton
			// 
			this->filterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->filterButton->Location = System::Drawing::Point(260, 83);
			this->filterButton->Name = L"filterButton";
			this->filterButton->Size = System::Drawing::Size(75, 23);
			this->filterButton->TabIndex = 1;
			this->filterButton->Text = L"Фильтр";
			this->filterButton->UseVisualStyleBackColor = false;
			this->filterButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::filterButton_Click);
			// 
			// statusComboBox
			// 
			this->statusComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->statusComboBox->FormattingEnabled = true;
			this->statusComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"New", L"In Progress", L"Completed" });
			this->statusComboBox->Location = System::Drawing::Point(341, 85);
			this->statusComboBox->Name = L"statusComboBox";
			this->statusComboBox->Size = System::Drawing::Size(121, 21);
			this->statusComboBox->TabIndex = 2;
			this->statusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderTrackingForm::statusComboBox_SelectedIndexChanged);
			// 
			// orderDataGridView
			// 
			this->orderDataGridView->BackgroundColor = System::Drawing::Color::IndianRed;
			this->orderDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->Column1
			});
			this->orderDataGridView->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->orderDataGridView->Location = System::Drawing::Point(46, 112);
			this->orderDataGridView->Name = L"orderDataGridView";
			this->orderDataGridView->Size = System::Drawing::Size(416, 181);
			this->orderDataGridView->TabIndex = 3;
			this->orderDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderTrackingForm::orderDataGridView_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Номер заказа";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Выбранное блюдо";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Статус";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &OrderTrackingForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите ваше имя";
			this->label1->Click += gcnew System::EventHandler(this, &OrderTrackingForm::label1_Click);
			// 
			// MenuButton
			// 
			this->MenuButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->MenuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MenuButton->Location = System::Drawing::Point(46, 299);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(98, 58);
			this->MenuButton->TabIndex = 6;
			this->MenuButton->Text = L"Меню";
			this->MenuButton->UseVisualStyleBackColor = false;
			this->MenuButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::MenuButton_Click);
			// 
			// OrderTrackingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(524, 921);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->orderDataGridView);
			this->Controls->Add(this->statusComboBox);
			this->Controls->Add(this->filterButton);
			this->Controls->Add(this->AddButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"OrderTrackingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OrderTrackingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OrderTrackingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Text = "Order Tracking";
		Size = System::Drawing::Size(540, 960);
		StartPosition = FormStartPosition::CenterScreen;
		// Установка "New" по умолчанию в ComboBox
		statusComboBox->SelectedIndex = 0;
	}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Показываем форму выбора блюда
		DishSelectionForm^ dishForm = gcnew DishSelectionForm(availableDishes);
		if (dishForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Получаем выбранное блюдо
			String^ selectedDish = dishForm->SelectedDish;
			// Если блюдо было выбрано, добавляем его в таблицу заказов
			if (!String::IsNullOrEmpty(selectedDish)) {
				// Добавляем строку с информацией о заказе
				orderDataGridView->Rows->Add(orders->Count + 1, selectedDish, "New");
				// Добавляем информацию о заказе в список
				orders->Add(selectedDish);
			}
		}
	}
		   
	private: System::Void filterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем выбранный статус из ComboBox
		String^ selectedStatus = statusComboBox->SelectedItem->ToString();

		// Проходим по каждой строке таблицы и делаем ее невидимой, если статус не соответствует выбранному
		for (int i = 0; i < orderDataGridView->RowCount; i++) {
			// Проверяем, не является ли текущая строка новой строкой
			if (!orderDataGridView->Rows[i]->IsNewRow) {
				String^ currentStatus = "";
				if (orderDataGridView->Rows[i]->Cells[2]->Value != nullptr) {
					currentStatus = safe_cast<String^>(orderDataGridView->Rows[i]->Cells[2]->Value);
				}
				// Если статус не совпадает с выбранным, делаем строку невидимой
				orderDataGridView->Rows[i]->Visible = (currentStatus == selectedStatus);
			}
		}
	}


	private: System::Void statusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void orderDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Указываем путь к вашему PDF-файлу
		String^ pdfFilePath = "C:\\Users\\igleb\\OneDrive\\Рабочий стол\\ARM\\Project1\\menu\\menu.txt";

		// Проверяем, существует ли файл
		if (System::IO::File::Exists(pdfFilePath)) {
			// Запускаем процесс для открытия PDF-файла
			System::Diagnostics::Process::Start(pdfFilePath);
		}
		else {
			// Если файл не найден, выводим сообщение об ошибке
			MessageBox::Show("Файл PDF не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


};
}
