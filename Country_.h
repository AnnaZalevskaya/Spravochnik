#pragma once

//�������� ��������� ������

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <sstream>
#include <fstream>
#include <codecvt>
#include <locale.h>

using namespace std;

/*
	������ � ������:
	1. �������� ������
	2. �������
	3. ����������� ���������
	4. �������
	5. ���������
*/

struct Parametres {
	string country_name,
		capital,
		contenent;
	int people,
		square;
};

struct IndexParametres {
	int phonecode,
		mailcode;
	string internetcode,
		letter,
		countryname;
};

//�������� ������

class IFormatOutput {
public:
	virtual System::String^ outputRecord(System::String^ s) = 0;
};

class HTML : public IFormatOutput {
public:
	System::String^ outputRecord(System::String^ s) {
		System::String^ fs;
		fs = "<" + s + ">";
		return fs;
	};
};

class JSON : public IFormatOutput {
public:
	System::String^ outputRecord(System::String^ s) {
		System::String^ fs;
		fs = "{" + s + "}";
		return fs;
	};
};

class Country_
{
private:
	Parametres parametres;
public:
	IFormatOutput* f;
	Country_();
	Country_(Parametres parametres_);
	~Country_();

	void Print();
	void CountryEnter(Parametres parametres_);

	//����� ������ �����

	Parametres getParametres() {
		return parametres;
	};
	const char* Name() {
		return parametres.country_name.c_str();
	}
	const int Square() {
		return parametres.square;
	}
	const char* Capital() {
		return parametres.capital.c_str();
	}
	const int People() {
		return parametres.people;
	}
	const char* Contenent() {
		return parametres.contenent.c_str();
	}
	//���������� ��������� =
	Country_& operator = (Country_ d_o);
	void setFormat(IFormatOutput* f) {
		this->f = f;
	}
	System::String^ getOutput(System::String^ s) {
		return f->outputRecord(s);
		//return f->outputRecord(gcnew System::String(Name()), Square().ToString(), gcnew System::String(Capital()), People().ToString(), gcnew System::String(Contenent()));
	}
};


class LogPass
{
private:
	string login;
	string password;
public:
	bool Login_Password(System::String^ login, System::String^ password) {
		if ((login == "Anna" || login == "Ksenia") && password == "12345") {
			return true;
		}
		else {
			return false;
		}
	}
	bool Registr(System::String^ login, System::String^ password) {
		if (login != "" && password != "") {
			return true;
		}
		else {
			return false;
		}
	}
};

class Index
{
private:
	IndexParametres indexparametres;

public:
	Index();
	Index(IndexParametres indexparametres_);
	~Index();

	void Printindex();
	void IndexEnter(IndexParametres indexparametres_);

	//����� ������ �����

	IndexParametres getIndexParametres() {
		return indexparametres;
	};

	//���������� ��������� =
	Index& operator = (Index d_o);
};

class Test 
{
private:
	Test() {};
	~Test() {};
public:

};