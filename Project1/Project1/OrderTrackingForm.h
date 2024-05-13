#pragma once
#include <vcclr.h>
#include <vector>
#include <string>
#include "DishSelectionForm.h"
#include "MenuForm.h"
#include "Base.h"

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
			availableDishes->Add("���� ����������");
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
	private: System::Windows::Forms::Button^ sendbutton;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cost;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






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
			this->sendbutton = (gcnew System::Windows::Forms::Button());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->orderDataGridView->RowHeadersWidth = 62;
			this->orderDataGridView->Size = System::Drawing::Size(433, 181);
			this->orderDataGridView->TabIndex = 3;
			this->orderDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderTrackingForm::orderDataGridView_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"����� ������";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"��������� �����";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"������";
			this->Column1->MinimumWidth = 8;
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
			this->label2->Text = L"������� �� �������� ������ ����� ������� �� ������";
			// 
			// sendbutton
			// 
			this->sendbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sendbutton->Location = System::Drawing::Point(338, 363);
			this->sendbutton->Name = L"sendbutton";
			this->sendbutton->Size = System::Drawing::Size(141, 58);
			this->sendbutton->TabIndex = 9;
			this->sendbutton->Text = L"��������� ������ ������";
			this->sendbutton->UseVisualStyleBackColor = false;
			this->sendbutton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::sendbutton_Click);
			// 
			// updateButton
			// 
			this->updateButton->BackColor = System::Drawing::Color::LightCoral;
			this->updateButton->Location = System::Drawing::Point(485, 112);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(33, 181);
			this->updateButton->TabIndex = 10;
			this->updateButton->Text = L"�\r\n�\r\n�\r\n�\r\n�\r\n�\r\n�\r\n�";
			this->updateButton->UseVisualStyleBackColor = false;
			this->updateButton->Click += gcnew System::EventHandler(this, &OrderTrackingForm::updateButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->NameCol,
					this->Cost
			});
			this->dataGridView1->Location = System::Drawing::Point(46, 501);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(276, 150);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderTrackingForm::dataGridView1_CellContentClick);
			// 
			// NameCol
			// 
			this->NameCol->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->NameCol->HeaderText = L"�������� �����";
			this->NameCol->Name = L"NameCol";
			// 
			// Cost
			// 
			this->Cost->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cost->HeaderText = L"����";
			this->Cost->Name = L"Cost";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(334, 501);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"� ������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(428, 501);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"0.00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(474, 506);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"���";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(338, 524);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// OrderTrackingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(524, 888);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->sendbutton);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

				Base b;
				b.ConnectToDB();
				b.DeleteData(orderDataGridView->Rows[e->RowIndex]->Cells[0]->Value->ToString());

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

	private: System::Void sendbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Base b;
		Dictionary<String^, double> dishPrices;
		dishPrices["���� ����������"] = 100.0;
		dishPrices["����� �� ����������"] = 150.0;
		dishPrices["������"] = 120.0;
		dishPrices["��������� ��������"] = 180.0;
		dishPrices["���-����"] = 90.0;
		dishPrices["�������: ���� 0,5 �"] = 50.0;
		dishPrices["�������: ��� 1 �"] = 30.0;
		dishPrices["�������: �������� ������� 0,3 �"] = 70.0;
		dishPrices["�������: ��������� 0,3 �"] = 80.0;
		dishPrices["�������: ���� 0,5 �"] = 60.0;

		double totalCost;

		// ������� ������ ������ � orderDataGridView
		for (int i = 0; i < orderDataGridView->RowCount; i++) {
			if (orderDataGridView->Rows[i]->Cells[1]->Value != nullptr) {
				String^ dishName = orderDataGridView->Rows[i]->Cells[1]->Value->ToString();
				double price = 0.0;

				// ��������, ���������� �� �������� ����� � ������� dishPrices
				if (dishPrices.ContainsKey(dishName)) {
					price = dishPrices[dishName];
				}
				// ���������� �������� ����� � ���� � dataGridView1
				dataGridView1->Rows->Add(dishName, price);

				// ���������� ���� ����� � ����� �����
				totalCost += price;
			}
		}
		label4->Text = totalCost.ToString();
		// �������� �� ������ ������ ������� �������
		for (int i = 0; i < orderDataGridView->RowCount; ) {
			// ���������, ��� ������ ������ � ������� ������ ����� "New"
			if (orderDataGridView->Rows[i]->Cells[2]->Value != nullptr &&
				orderDataGridView->Rows[i]->Cells[2]->Value->ToString() == "New") {
				// ������ ������ ������ �� "In Progress"
				orderDataGridView->Rows[i]->Cells[2]->Value = "In Progress";

				

				b.InsertData(comboBox1->Text,
					orderDataGridView->Rows[i]->Cells[0]->Value->ToString(),
					orderDataGridView->Rows[i]->Cells[1]->Value->ToString(),
					orderDataGridView->Rows[i]->Cells[2]->Value->ToString());

				// ����������� i ������ ����� ��������� ������� ������
				i++;
			}
			else {
				// ���� ������ �� ����� "New", ��������� � ��������� ������
				i++;
			}
		}


	}


	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Base b;
		List<ClassNames^>^ namesList = b.FillTable();
		orderDataGridView->Rows->Clear();
		for (int i = 0; i < namesList->Count; i++)
		{
			orderDataGridView->Rows->Add();
			orderDataGridView->Rows[i]->Cells[0]->Value = namesList[i]->NumberOrder;
			orderDataGridView->Rows[i]->Cells[1]->Value = namesList[i]->NameFood;
			orderDataGridView->Rows[i]->Cells[2]->Value = namesList[i]->Status;
		}
	}
		
	
	
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
