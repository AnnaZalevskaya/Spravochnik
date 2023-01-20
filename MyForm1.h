#pragma once
#include "MyForm.h"
#include "MyForm3.h"
#include "MyForm6.h"
namespace Country {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button_vvod;
	private: System::Windows::Forms::Button^ button_output;
	private: System::Windows::Forms::Button^ button_edit;
	private: System::Windows::Forms::Button^ button_add;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_file;
	private: System::Windows::Forms::Label^ label_back;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button_vvod = (gcnew System::Windows::Forms::Button());
			this->button_output = (gcnew System::Windows::Forms::Button());
			this->button_edit = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_back = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_vvod
			// 
			this->button_vvod->BackColor = System::Drawing::Color::Lavender;
			this->button_vvod->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_vvod->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_vvod->Location = System::Drawing::Point(237, 99);
			this->button_vvod->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_vvod->Name = L"button_vvod";
			this->button_vvod->Size = System::Drawing::Size(153, 65);
			this->button_vvod->TabIndex = 0;
			this->button_vvod->Text = L"Ввод";
			this->button_vvod->UseVisualStyleBackColor = false;
			this->button_vvod->Click += gcnew System::EventHandler(this, &MyForm1::button_vvod_Click);
			// 
			// button_output
			// 
			this->button_output->BackColor = System::Drawing::Color::Lavender;
			this->button_output->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_output->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_output->Location = System::Drawing::Point(237, 186);
			this->button_output->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_output->Name = L"button_output";
			this->button_output->Size = System::Drawing::Size(153, 66);
			this->button_output->TabIndex = 1;
			this->button_output->Text = L"Вывод";
			this->button_output->UseVisualStyleBackColor = false;
			this->button_output->Click += gcnew System::EventHandler(this, &MyForm1::button_output_Click);
			// 
			// button_edit
			// 
			this->button_edit->BackColor = System::Drawing::Color::Lavender;
			this->button_edit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_edit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_edit->Location = System::Drawing::Point(237, 275);
			this->button_edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_edit->Name = L"button_edit";
			this->button_edit->Size = System::Drawing::Size(153, 66);
			this->button_edit->TabIndex = 2;
			this->button_edit->Text = L"Изменение";
			this->button_edit->UseVisualStyleBackColor = false;
			this->button_edit->Click += gcnew System::EventHandler(this, &MyForm1::button_edit_Click);
			// 
			// button_add
			// 
			this->button_add->BackColor = System::Drawing::Color::Lavender;
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_add->Location = System::Drawing::Point(237, 367);
			this->button_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(153, 65);
			this->button_add->TabIndex = 3;
			this->button_add->Text = L"Добавление";
			this->button_add->UseVisualStyleBackColor = false;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm1::button_add_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::PowderBlue;
			this->label1->Location = System::Drawing::Point(167, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 41);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Работа с данными";
			// 
			// label_back
			// 
			this->label_back->AutoSize = true;
			this->label_back->BackColor = System::Drawing::Color::Transparent;
			this->label_back->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_back->Location = System::Drawing::Point(29, 469);
			this->label_back->Name = L"label_back";
			this->label_back->Size = System::Drawing::Size(100, 25);
			this->label_back->TabIndex = 26;
			this->label_back->Text = L"<-- Назад";
			this->label_back->Click += gcnew System::EventHandler(this, &MyForm1::label_back_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(656, 550);
			this->Controls->Add(this->label_back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_edit);
			this->Controls->Add(this->button_output);
			this->Controls->Add(this->button_vvod);
			this->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник стран";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void button_vvod_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm6^ function_form = gcnew MyForm6();
		function_form->label2->Visible = true;
		function_form->button_input->Visible = true;
		function_form->button_file->Visible = true;
		function_form->ShowDialog();
    }
    private: System::Void button_output_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ list_form = gcnew MyForm3();
		list_form->ShowDialog();
    }
    private: System::Void button_edit_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm6^ function_form = gcnew MyForm6();
		function_form->label3->Visible = true;
		function_form->label3->Text = "Изменение данных";
		function_form->groupBox1->Visible = true;
		function_form->numericUpDown1->Visible = true;
		function_form->button_elem->Visible = true;
		function_form->button_action_edit->Visible = true;
		function_form->ShowDialog();
    }
    private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm6^ function_form = gcnew MyForm6();
		function_form->label3->Visible = true;
		function_form->label3->Text = "Добавление данных";
		function_form->groupBox1->Visible = true;
		function_form->button_action_add->Visible = true;
		function_form->ShowDialog();
    }
	private: System::Void label_back_Click(System::Object^ sender, System::EventArgs^ e) {
	//	MyForm^ begin_form = gcnew MyForm();
	//	begin_form->Show();
	}
    private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
};
}