#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace Country {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button_user;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_admin;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button_user = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_admin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(333, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->UseWaitCursor = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->Location = System::Drawing::Point(555, 215);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 34);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(219, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите пользователя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(219, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите пароль";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Location = System::Drawing::Point(555, 288);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(232, 34);
			this->textBox2->TabIndex = 4;
			// 
			// button_user
			// 
			this->button_user->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_user->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_user->ForeColor = System::Drawing::Color::White;
			this->button_user->Location = System::Drawing::Point(291, 373);
			this->button_user->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_user->Name = L"button_user";
			this->button_user->Size = System::Drawing::Size(156, 76);
			this->button_user->TabIndex = 5;
			this->button_user->Text = L"Вход";
			this->button_user->UseVisualStyleBackColor = false;
			this->button_user->Click += gcnew System::EventHandler(this, &MyForm::button_user_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(555, 373);
			this->button_exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(156, 76);
			this->button_exit->TabIndex = 6;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button_admin
			// 
			this->button_admin->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_admin->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_admin->ForeColor = System::Drawing::Color::White;
			this->button_admin->Location = System::Drawing::Point(291, 479);
			this->button_admin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_admin->Name = L"button_admin";
			this->button_admin->Size = System::Drawing::Size(420, 42);
			this->button_admin->TabIndex = 7;
			this->button_admin->Text = L"Войти как администратор";
			this->button_admin->UseVisualStyleBackColor = false;
			this->button_admin->Click += gcnew System::EventHandler(this, &MyForm::button_admin_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1048, 647);
			this->Controls->Add(this->button_admin);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_user);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::Info;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник стран";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_user_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log = textBox1->Text;
		String^ pass = textBox2->Text;
		if (log != "" && pass != "") {
			MyForm2^ user_form = gcnew MyForm2(); 
			user_form->label_hello->Text = "Добро пожаловать, " + textBox1->Text + "!:)";
			user_form->Show(); 
			MyForm::Hide();
		}
		else {
			MessageBox::Show(this, "Вы ничего не ввели", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	};
	
	private: System::Void button_admin_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ log = textBox1->Text;
		String^ pass = textBox2->Text;
		if ((log == "Anna" || log == "Ksenia") && pass == "12345") {
			MyForm1^ admin_form = gcnew MyForm1();
			admin_form->Show();
			MyForm::Hide();
		}
		else {
			MessageBox::Show(this, "Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	};
};
}
