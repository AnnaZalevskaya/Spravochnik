//#include "Country_.h"
//#include "Functions.h"
//#include "MyForm3.h"
////#include "MyForm.h"
//#include "MyForm1.h"
//
//using namespace System;
//using namespace System::Windows::Forms;
//
//int step;
//string filename;
//
//int _size = 0;
//Country_* d = new Country_[_size];
//
//System::Void Country::MyForm1::button_vvod_Click(System::Object^ sender, System::EventArgs^ e) {
//	label2->Text = "Выберите способ ввода данныx:";
//	button_input->Visible = true;
//	button_file->Visible = true;
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_input_Click(System::Object^ sender, System::EventArgs^ e) {
//	Parametres parametres;
//	int n = 1;
//	d = new Country_[n];
//	label3->Visible = true;
//	label3->Text = "Данные страны";
//	for (int i = 0; i < n; i++) {
//		label4->Visible = true;
//		textBox1->Visible = true;
//		String^ country_name = gcnew String(parametres.country_name.c_str());
//		textBox1->Text = country_name;
//		label5->Visible = true;
//		textBox2->Visible = true;
//		String^ square = parametres.square.ToString();
//		textBox2->Text = square;
//		label6->Visible = true;
//		textBox3->Visible = true;
//		String^ capital = gcnew String(parametres.capital.c_str());
//		textBox3->Text = capital;
//		label7->Visible = true;
//		textBox4->Visible = true;
//		String^ people = parametres.people.ToString();
//		textBox4->Text = people;
//		label8->Visible = true;
//		textBox5->Visible = true;
//		String^ contenent = gcnew String(parametres.contenent.c_str());
//		textBox5->Text = contenent;
//	}
//	button1->Visible = true;
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	int n = 1;
//	CountryEnter(d, n);
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_file_Click(System::Object^ sender, System::EventArgs^ e) {
//	int n; 
//	ifstream reading("input.txt");
//
//	if (reading) {
//		Parametres parametres;
//		reading >> n;
//
//		d = new Country_[n];
//
//		for (int i = 0; i < n; i++) {
//			reading >> parametres.country_name >> parametres.square >> parametres.capital >> parametres.people >> parametres.contenent;
//
//			d[i].CountryEnter(parametres);
//		}
//	}
//	label3->Visible = true;
//	label3->Text = "Данные считаны!";
//	label3->ForeColor = System::Drawing::Color::Lime;
// /*   try {
//		label3->Visible = true;
//		label3->Text = "Данные считаны!";
//		label3->ForeColor = System::Drawing::Color::Lime;
//	}
//	catch (!filename.open()) {
//		label3->Visible = true;
//		label3->Text = "Ошибка открытия файла!";
//		label3->ForeColor = System::Drawing::Color::Maroon;
//	}*/
//	reading.close();
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_output_Click(System::Object^ sender, System::EventArgs^ e) {
//	MyForm3^ output_form = gcnew MyForm3(); //создание экземпляра
//	output_form->Show(); //открытие формы 
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_edit_Click(System::Object^ sender, System::EventArgs^ e) {
//	Parametres parametres;
//	Country_* d;
//	int n;
//
//	label3->Visible = true;
//	label3->Text = "Введите номер нужного элемента (от 1 до " + n + "): ";
//
//	label10->Visible = true;
//	textBox6->Visible = true;
//
//	label3->Visible = true;
//	label4->Visible = true;
//	textBox1->Visible = true;
//	String^ country_name = gcnew String(parametres.country_name.c_str());
//	textBox1->Text = country_name;
//	label5->Visible = true;
//	textBox2->Visible = true;
//	String^ square = parametres.square.ToString();
//	textBox2->Text = square;
//	label6->Visible = true;
//	textBox3->Visible = true;
//	String^ capital = gcnew String(parametres.capital.c_str());
//	textBox3->Text = capital;
//	label7->Visible = true;
//	textBox4->Visible = true;
//	String^ people = parametres.people.ToString();
//	textBox4->Text = people;
//	label8->Visible = true;
//	textBox5->Visible = true;
//	String^ contenent = gcnew String(parametres.contenent.c_str());
//	textBox5->Text = contenent;
//
//	button2->Visible = true;
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e) {
//	Country_* d;
//	int n;
//	Parametres parametres;
//	int _n;
//	d[_n].CountryEnter(parametres);
//	_n = Convert::ToInt32(textBox6->Text);
///*	try {
//		label9->Visible = true;
//		label9->Text = "Изменено!";
//		label9->ForeColor = System::Drawing::Color::Lime;
//	}
//	catch () {
//		label9->Visible = true;
//		label9->Text = "Номер введен не верно!";
//		label9->ForeColor = System::Drawing::Color::Maroon;
//	}*/
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_add_Click(System::Object^ sender, System::EventArgs^ e) {
//	Parametres parametres;
//
//	label3->Visible = true;
//	label4->Visible = true;
//	textBox1->Visible = true;
//	String^ country_name = gcnew String(parametres.country_name.c_str());
//	textBox1->Text = country_name;
//	label5->Visible = true;
//	textBox2->Visible = true;
//	String^ square = parametres.square.ToString();
//	textBox2->Text = square;
//	label6->Visible = true;
//	textBox3->Visible = true;
//	String^ capital = gcnew String(parametres.capital.c_str());
//	textBox3->Text = capital;
//	label7->Visible = true;
//	textBox4->Visible = true;
//	String^ people = parametres.people.ToString();
//	textBox4->Text = people;
//	label8->Visible = true;
//	textBox5->Visible = true;
//	String^ contenent = gcnew String(parametres.contenent.c_str());
//	textBox5->Text = contenent;
//
//	button2->Visible = true;
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e) {
//	//AddCountry(d, n);
//	return System::Void();
//}
//
//System::Void Country::MyForm1::button_sort_Click(System::Object^ sender, System::EventArgs^ e) {
//	int n;
//	Country_ buf;
//	int numofSorted = 0;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (d[i].getParametres().square > d[j].getParametres().square) {
//
//				buf = d[i];
//				d[i] = d[j];
//				d[j] = buf;
//
//				numofSorted++;
//			}
//		}
//	}
//
//	label9->Visible = true;
//	label9->Text = "Данные отсортированы! \nКоличество сортировок: " + numofSorted;
//	return System::Void();
//}
//
//System::Void Country::MyForm1::label_back_Click(System::Object^ sender, System::EventArgs^ e){
//	MyForm1::Hide(); 
//	MyForm^ begin_form = gcnew MyForm();
//	begin_form->Show(); 
//	return System::Void();
//}