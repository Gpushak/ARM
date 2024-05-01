#pragma once

#include <vector>
#include <string>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ OrderTrackingForm
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
			this->Load += gcnew System::EventHandler(this, &OrderTrackingForm::OrderTrackingForm_Load);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->filterButton = (gcnew System::Windows::Forms::Button());
			this->statusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->orderDataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(0, 0);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(75, 23);
			this->AddButton->TabIndex = 0;
			this->AddButton->Text = L"Add order";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::AddButton_Click);
			// 
			// filterButton
			// 
			this->filterButton->Location = System::Drawing::Point(121, 0);
			this->filterButton->Name = L"filterButton";
			this->filterButton->Size = System::Drawing::Size(75, 23);
			this->filterButton->TabIndex = 1;
			this->filterButton->Text = L"Filter";
			this->filterButton->UseVisualStyleBackColor = true;
			this->filterButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::filterButton_Click);
			// 
			// statusComboBox
			// 
			this->statusComboBox->FormattingEnabled = true;
			this->statusComboBox->Location = System::Drawing::Point(0, 56);
			this->statusComboBox->Name = L"statusComboBox";
			this->statusComboBox->Size = System::Drawing::Size(121, 21);
			this->statusComboBox->TabIndex = 2;
			this->statusComboBox->Items->Add("New");
			this->statusComboBox->Items->Add("In Progress");
			this->statusComboBox->Items->Add("Completed");
			this->statusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderTrackingForm::statusComboBox_SelectedIndexChanged);
			// 
			// orderDataGridView
			// 
			this->orderDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderDataGridView->Location = System::Drawing::Point(306, 12);
			this->orderDataGridView->Name = L"orderDataGridView";
			this->orderDataGridView->Size = System::Drawing::Size(240, 150);
			this->orderDataGridView->TabIndex = 3;
			this->orderDataGridView->Columns->Add("Order ID", "Order ID");
			this->orderDataGridView->Columns->Add("Status", "Status");
			this->orderDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderTrackingForm::orderDataGridView_CellContentClick);
			// 
			// OrderTrackingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 467);
			this->Controls->Add(this->orderDataGridView);
			this->Controls->Add(this->statusComboBox);
			this->Controls->Add(this->filterButton);
			this->Controls->Add(this->AddButton);
			this->Name = L"OrderTrackingForm";
			this->Text = L"OrderTrackingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OrderTrackingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Text = "Order Tracking";
		Size = System::Drawing::Size(600, 300);
		StartPosition = FormStartPosition::CenterScreen;
	}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Add a new order
		orders->Add("New");
		orderDataGridView->Rows->Add(orders->Count, "New");
	}

	private: System::Void filterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Filter orders by status
		String^ selectedStatus = statusComboBox->SelectedItem->ToString();
		orderDataGridView->Rows->Clear();
		for (int i = 0; i < orders->Count; i++)
		{
			if (orders[i] == selectedStatus)
			{
				this->orderDataGridView->Rows->Add(i + 1, orders[i]);
			}
		}
		
	}
	private: System::Void statusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void orderDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
};
}
