#pragma once
#include <vcclr.h>
#include <vector>
#include <string>

namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MenuForm : public System::Windows::Forms::Form
    {
    public:
        MenuForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        ~MenuForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    protected:
    private: System::Windows::Forms::PictureBox^ pictureBox2;

    protected:


    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               this->SuspendLayout();
               // 
               // pictureBox1
               // 
               this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
               this->pictureBox1->Location = System::Drawing::Point(12, 12);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(749, 1010);
               this->pictureBox1->TabIndex = 0;
               this->pictureBox1->TabStop = false;
               // 
               // pictureBox2
               // 
               this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
               this->pictureBox2->Location = System::Drawing::Point(785, 12);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(763, 1010);
               this->pictureBox2->TabIndex = 1;
               this->pictureBox2->TabStop = false;
               // 
               // MenuForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->AutoScroll = true;
               this->ClientSize = System::Drawing::Size(524, 921);
               this->Controls->Add(this->pictureBox2);
               this->Controls->Add(this->pictureBox1);
               this->Name = L"MenuForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"MenuForm";
               this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               this->ResumeLayout(false);

           }
#pragma endregion
    private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
        Size = System::Drawing::Size(540, 960);
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
