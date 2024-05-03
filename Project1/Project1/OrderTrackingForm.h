#pragma once
#include <vcclr.h>
#include <vector>
#include <string>
#include "DishSelectionForm.h"
#include "MenuForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� OrderTrackingForm
	/// </summary>
	public ref class OrderTrackingForm : public System::Windows::Forms::Form
	{
	public:
		OrderTrackingForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			orders = gcnew System::Collections::Generic::List<String^>();
			filteredOrdersStatus = gcnew System::Collections::Generic::List<String^>();
			filteredOrders = gcnew System::Collections::Generic::List<String^>();
			this->Load += gcnew System::EventHandler(this, &OrderTrackingForm::OrderTrackingForm_Load);

			availableDishes = gcnew System::Collections::Generic::List<String^>();
			availableDishes->Add("���� ������������ ��������");
			availableDishes->Add("����� �� ����������");
			availableDishes->Add("������");
			availableDishes->Add("��������� ��������");
			availableDishes->Add("���-����");
			availableDishes->Add("�������: ���� 0,5 �");
			availableDishes->Add("�������: ��� 1 �");
			availableDishes->Add("�������: �������� ������� 0,3 �");
			availableDishes->Add("�������: ��������� 0,3 �");
			availableDishes->Add("�������: ���� 0,5 �");
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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


	private: System::Windows::Forms::Label^ label1;




	private: System::Collections::Generic::List<String^>^ availableDishes;



	private: System::Windows::Forms::Button^ MenuButton;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label2;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(338, 299);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(141, 58);
			this->AddButton->TabIndex = 0;
			this->AddButton->Text = L"�������� �����";
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
			this->filterButton->Text = L"������";
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
			this->statusComboBox->Size = System::Drawing::Size(138, 21);
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
			this->orderDataGridView->Size = System::Drawing::Size(433, 181);
			this->orderDataGridView->TabIndex = 3;
			this->orderDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderTrackingForm::orderDataGridView_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"����� ������";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"��������� �����";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"������";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"�������� ��� ������";
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
			this->MenuButton->Text = L"����";
			this->MenuButton->UseVisualStyleBackColor = false;
			this->MenuButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::MenuButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(46, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(150, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 40);
			this->label2->TabIndex = 8;
			this->label2->Text = L"������� �� ����� ������ ����� ������� �� ������";
			// 
			// OrderTrackingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(524, 921);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->label1);
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
		// ��������� "New" �� ��������� � ComboBox
		statusComboBox->SelectedIndex = 0;
	}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// ���������� ����� ������ �����
		DishSelectionForm^ dishForm = gcnew DishSelectionForm(availableDishes);
		if (dishForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// �������� ��������� �����
			String^ selectedDish = dishForm->SelectedDish;
			// ���� ����� ���� �������, ��������� ��� � ������� �������
			if (!String::IsNullOrEmpty(selectedDish)) {
				// ��������� ������ � ����������� � ������
				orderDataGridView->Rows->Add(orders->Count + 1, selectedDish, "New");
				// ��������� ���������� � ������ � ������
				orders->Add(selectedDish);
			}
		}
	}

	private: System::Void filterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ��������� ������ �� ComboBox
		String^ selectedStatus = statusComboBox->SelectedItem->ToString();

		// �������� �� ������ ������ ������� � ������ �� ���������, ���� ������ �� ������������� ����������
		for (int i = 0; i < orderDataGridView->RowCount; i++) {
			// ���������, �� �������� �� ������� ������ ����� �������
			if (!orderDataGridView->Rows[i]->IsNewRow) {
				String^ currentStatus = "";
				if (orderDataGridView->Rows[i]->Cells[2]->Value != nullptr) {
					currentStatus = safe_cast<String^>(orderDataGridView->Rows[i]->Cells[2]->Value);
				}
				// ���� ������ �� ��������� � ���������, ������ ������ ���������
				orderDataGridView->Rows[i]->Visible = (currentStatus == selectedStatus);
			}
		}
	}


	private: System::Void statusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void orderDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// ���������, ��� ���� ��� �� ������ "��������"
		if (e->RowIndex >= 0) {
			// �������� ����� ������ �� ������
			String^ orderNumber = orderDataGridView->Rows[e->RowIndex]->Cells[0]->Value->ToString();

			// ���������� ���������� ���� � ��������
			System::Windows::Forms::DialogResult result = MessageBox::Show("������ �� �� �������� ����� �" + orderNumber + "?", "������ ������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			// ���� ������������ ������ "��"
			if (result == System::Windows::Forms::DialogResult::Yes) {
				// ������� ����� �� ������
				orders->RemoveAt(e->RowIndex);
				// ������� ������ �� �������
				orderDataGridView->Rows->RemoveAt(e->RowIndex);
			}
		}
	}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuForm^ menuForm = gcnew MenuForm();
		menuForm->Show();
	}


	};
}
