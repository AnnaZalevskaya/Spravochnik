#pragma once
#include "CountryList.h"
#include "Country_.h"
#include "Functions.h"
#include <fstream>
namespace Country {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	private: CountryList* cl;
	public:
		MyForm6(void)
		{
			cl = new CountryList();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
			delete cl;
		}
	public: System::Windows::Forms::Button^ button_elem;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Button^ button_action_add;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Button^ button_file;
	public: System::Windows::Forms::Button^ button_input;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Button^ button_action_edit;
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->button_elem = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_action_add = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_file = (gcnew System::Windows::Forms::Button());
			this->button_input = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_action_edit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_elem
			// 
			this->button_elem->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_elem->Location = System::Drawing::Point(648, 196);
			this->button_elem->Name = L"button_elem";
			this->button_elem->Size = System::Drawing::Size(95, 43);
			this->button_elem->TabIndex = 76;
			this->button_elem->Text = L"Выбрать элемент";
			this->button_elem->UseVisualStyleBackColor = false;
			this->button_elem->Visible = false;
			this->button_elem->Click += gcnew System::EventHandler(this, &MyForm6::button_elem_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(657, 168);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(74, 22);
			this->numericUpDown1->TabIndex = 75;
			this->numericUpDown1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(406, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 74;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// button_action_add
			// 
			this->button_action_add->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_action_add->Location = System::Drawing::Point(354, 430);
			this->button_action_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_action_add->Name = L"button_action_add";
			this->button_action_add->Size = System::Drawing::Size(117, 30);
			this->button_action_add->TabIndex = 60;
			this->button_action_add->Text = L"Ввод";
			this->button_action_add->UseVisualStyleBackColor = false;
			this->button_action_add->Visible = false;
			this->button_action_add->Click += gcnew System::EventHandler(this, &MyForm6::button_action_add_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(418, 480);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 20);
			this->label9->TabIndex = 59;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// button_file
			// 
			this->button_file->BackColor = System::Drawing::SystemColors::Control;
			this->button_file->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button_file->Location = System::Drawing::Point(454, 56);
			this->button_file->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_file->Name = L"button_file";
			this->button_file->Size = System::Drawing::Size(125, 46);
			this->button_file->TabIndex = 58;
			this->button_file->Text = L"Считать с файла";
			this->button_file->UseVisualStyleBackColor = false;
			this->button_file->Visible = false;
			this->button_file->Click += gcnew System::EventHandler(this, &MyForm6::button_file_Click);
			// 
			// button_input
			// 
			this->button_input->BackColor = System::Drawing::SystemColors::Control;
			this->button_input->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button_input->Location = System::Drawing::Point(282, 56);
			this->button_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_input->Name = L"button_input";
			this->button_input->Size = System::Drawing::Size(125, 46);
			this->button_input->TabIndex = 57;
			this->button_input->Text = L"Запись вручную";
			this->button_input->UseVisualStyleBackColor = false;
			this->button_input->Visible = false;
			this->button_input->Click += gcnew System::EventHandler(this, &MyForm6::button_input_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Aquamarine;
			this->label2->Location = System::Drawing::Point(22, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 16);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Выберите способ ввода данных:";
			this->label2->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->ForeColor = System::Drawing::Color::Azure;
			this->groupBox1->Location = System::Drawing::Point(156, 155);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(475, 270);
			this->groupBox1->TabIndex = 77;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные страны";
			this->groupBox1->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::MediumBlue;
			this->label8->Location = System::Drawing::Point(44, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 18);
			this->label8->TabIndex = 82;
			this->label8->Text = L"Континент";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::MediumBlue;
			this->label7->Location = System::Drawing::Point(44, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 18);
			this->label7->TabIndex = 81;
			this->label7->Text = L"Численность населения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::MediumBlue;
			this->label6->Location = System::Drawing::Point(44, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 18);
			this->label6->TabIndex = 80;
			this->label6->Text = L"Столица страны";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::MediumBlue;
			this->label5->Location = System::Drawing::Point(44, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 18);
			this->label5->TabIndex = 79;
			this->label5->Text = L"Площадь страны";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::MediumBlue;
			this->label4->Location = System::Drawing::Point(44, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 18);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Название страны";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(254, 228);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(176, 22);
			this->textBox5->TabIndex = 77;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(254, 184);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(176, 22);
			this->textBox4->TabIndex = 76;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(254, 136);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 22);
			this->textBox3->TabIndex = 75;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 93);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 22);
			this->textBox2->TabIndex = 74;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(254, 48);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 22);
			this->textBox1->TabIndex = 73;
			// 
			// button_action_edit
			// 
			this->button_action_edit->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_action_edit->Location = System::Drawing::Point(501, 430);
			this->button_action_edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_action_edit->Name = L"button_action_edit";
			this->button_action_edit->Size = System::Drawing::Size(117, 30);
			this->button_action_edit->TabIndex = 79;
			this->button_action_edit->Text = L"Изменить";
			this->button_action_edit->UseVisualStyleBackColor = false;
			this->button_action_edit->Visible = false;
			this->button_action_edit->Click += gcnew System::EventHandler(this, &MyForm6::button_action_edit_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(797, 557);
			this->Controls->Add(this->button_action_edit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_elem);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_action_add);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button_file);
			this->Controls->Add(this->button_input);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->Text = L"Справочник стран";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
    private: System::Void button_input_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		button_action_add->Visible = true;
    }
	private: System::Void Read_File() {
		Country_ c;
		cl->Load();
		Show_Country(c);
	}
	private: System::Void Show_Country(Country_ c) {
		textBox1->Text = gcnew String(c.Name());
		textBox2->Text = c.Square().ToString();
		textBox3->Text = gcnew String(c.Capital());
		textBox4->Text = c.People().ToString();
		textBox5->Text = gcnew String(c.Contenent());
	}
    private: System::Void button_file_Click(System::Object^ sender, System::EventArgs^ e) {
		Read_File();
		numericUpDown1->Visible = true;
		groupBox1->Visible = true;
		button_elem->Visible = true;
		Show_Country(cl->get((int)numericUpDown1->Value));
		label3->Visible = true;
		label3->Text = "Данные считаны!";
		label3->ForeColor = System::Drawing::Color::Lime;
    }
	private: System::Void button_elem_Click(System::Object^ sender, System::EventArgs^ e) {
		Read_File();
		Show_Country(cl->get((int)numericUpDown1->Value));
	}
    private: System::Void button_action_add_Click(System::Object^ sender, System::EventArgs^ e) {
		CountryEnter();
    }
    private: System::Void button_action_edit_Click(System::Object^ sender, System::EventArgs^ e) {
		CountryChange();
    }
};
}
