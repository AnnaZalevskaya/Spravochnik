#pragma once
#include "MyForm3.h"
#include "MyForm4.h"
namespace Country {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
    	MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_choise_country;
	private: System::Windows::Forms::Button^ button_test;
	public: System::Windows::Forms::Label^ label_hello;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_choise_country = (gcnew System::Windows::Forms::Button());
			this->button_test = (gcnew System::Windows::Forms::Button());
			this->label_hello = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->label1->Location = System::Drawing::Point(182, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(493, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Справочник стран мира";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_choise_country
			// 
			this->button_choise_country->BackColor = System::Drawing::Color::Lavender;
			this->button_choise_country->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_choise_country->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_choise_country->Location = System::Drawing::Point(307, 243);
			this->button_choise_country->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_choise_country->Name = L"button_choise_country";
			this->button_choise_country->Size = System::Drawing::Size(220, 63);
			this->button_choise_country->TabIndex = 2;
			this->button_choise_country->Text = L"Выбор страны";
			this->button_choise_country->UseVisualStyleBackColor = false;
			this->button_choise_country->Click += gcnew System::EventHandler(this, &MyForm2::button_choise_country_Click);
			// 
			// button_test
			// 
			this->button_test->BackColor = System::Drawing::Color::Lavender;
			this->button_test->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_test->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_test->Location = System::Drawing::Point(307, 344);
			this->button_test->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_test->Name = L"button_test";
			this->button_test->Size = System::Drawing::Size(220, 63);
			this->button_test->TabIndex = 3;
			this->button_test->Text = L"Пройти тест";
			this->button_test->UseVisualStyleBackColor = false;
			this->button_test->Click += gcnew System::EventHandler(this, &MyForm2::button_test_Click);
			// 
			// label_hello
			// 
			this->label_hello->BackColor = System::Drawing::Color::Transparent;
			this->label_hello->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_hello->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label_hello->Location = System::Drawing::Point(186, 127);
			this->label_hello->Name = L"label_hello";
			this->label_hello->Size = System::Drawing::Size(511, 54);
			this->label_hello->TabIndex = 4;
			this->label_hello->Text = L"Добро пожаловать, Пользователь!:)";
			this->label_hello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(891, 640);
			this->Controls->Add(this->label_hello);
			this->Controls->Add(this->button_test);
			this->Controls->Add(this->button_choise_country);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник стран";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


    private: System::Void button_choise_country_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ choise_country_form = gcnew MyForm3(); //создание экземпляра
		choise_country_form->Show(); //открытие формы
    }
    private: System::Void button_test_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ test_form = gcnew MyForm4(); //создание экземпляра
		test_form->Show(); //открытие формы
    }
    private: System::Void MyForm2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	    Application::Exit();
    }
};
}
