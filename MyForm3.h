#pragma once
#include "CountryList.h"
#include "MyForm5.h"
#include "MyForm6.h"
namespace Country {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public: CountryList* cl;
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
			delete cl;
		}
	public: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Navy;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(51, 56);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(532, 508);
			this->listBox1->TabIndex = 0;
			this->listBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::listBox1_MouseDoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label1->Location = System::Drawing::Point(158, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Список стран мира";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(206, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 45);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Выбрать страну";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox1->Location = System::Drawing::Point(535, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 22);
			this->textBox1->TabIndex = 4;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(669, 662);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm3";
			this->Text = L"Справочник стран";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Show_Name() {
		listBox1->Items->Clear();
		for (int i = 0; i < cl->list_size(); i++) {
			listBox1->Items->Add(gcnew String(cl->get(i).Name()));
		}
		textBox1->Text = listBox1->Items->Count.ToString();
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Country_ c;
		try {
			cl->Load();
			Show_Name();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		button1->Enabled = false;
    }
    private: System::Void listBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		MyForm5^ country_form = gcnew MyForm5();
		int i = listBox1->Items->IndexOf(listBox1->SelectedItem);
		Image^ img_flag = gcnew Bitmap("Flags\\" + i + ".png");
		country_form->pictureBox1->Image = img_flag;
		Image^ img_map = gcnew Bitmap("Maps\\" + i + ".jpg");
		country_form->pictureBox2->Image = img_map;
		country_form->label1->Text = gcnew String(cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).Name());
		country_form->label7->Text = gcnew String(cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).Name());
		country_form->label8->Text = cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).Square().ToString() + " кв км";
		country_form->label9->Text = gcnew String(cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).Capital());
		country_form->label10->Text = cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).People().ToString() + " человек";
		country_form->label11->Text = gcnew String(cl->get(listBox1->Items->IndexOf(listBox1->SelectedItem)).Contenent());
		country_form->ShowDialog();
    }
};
}
