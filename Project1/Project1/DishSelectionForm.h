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
    using namespace std;
    public ref class DishSelectionForm : public System::Windows::Forms::Form
    {
    public:
        property String^ SelectedDish {
            String^ get() {
                return comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "";
            }
        }

        DishSelectionForm(System::Collections::Generic::List<String^>^ dishes) {
            InitializeComponent();
            for each (String ^ dish in dishes) {
                comboBox1->Items->Add(dish);
            }
            comboBox1->SelectedIndex = 0;
        }


    protected:
        ~DishSelectionForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::Button^ okButton;

        void InitializeComponent(void) {
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->okButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(12, 12);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(188, 21);
            this->comboBox1->TabIndex = 0;
            // 
            // okButton
            // 
            this->okButton->Location = System::Drawing::Point(12, 39);
            this->okButton->Name = L"okButton";
            this->okButton->Size = System::Drawing::Size(75, 23);
            this->okButton->TabIndex = 1;
            this->okButton->Text = L"OK";
            this->okButton->UseVisualStyleBackColor = true;
            this->okButton->Click += gcnew System::EventHandler(this, &DishSelectionForm::okButton_Click);
            // 
            // DishSelectionForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(212, 71);
            this->Controls->Add(this->okButton);
            this->Controls->Add(this->comboBox1);
            this->Name = L"DishSelectionForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Выбор блюда";
            this->ResumeLayout(false);

        }

        // Обработчик события для нажатия кнопки "OK"
        void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }
    };
}
