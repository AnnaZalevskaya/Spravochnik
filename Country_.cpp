//�������� ������� ����� ������

#include "Country_.h"

Country_::Country_()
{
	parametres.country_name = "";
	parametres.capital = "";
	parametres.people = 0;
	parametres.square = 0;
	parametres.contenent = "";
}

Country_::Country_(Parametres parametres_)
{
	parametres.country_name = parametres_.country_name;
	parametres.capital = parametres_.capital;
	parametres.people = parametres_.people;
	parametres.square = parametres_.square;
	parametres.contenent = parametres_.contenent;
}

Country_::~Country_()
{

}

void Country_::Print()
{
	cout << "�������� ������: " << parametres.country_name << endl;
	cout << "�������: " << parametres.capital << endl;
	cout << "����������� ���������: " << parametres.people << endl;
	cout << "������� ���������: " << parametres.square << endl;
	cout << "��������������� ������: " << parametres.contenent << endl;
}

void Country_::CountryEnter(Parametres parametres_)
{
	parametres.country_name = parametres_.country_name;
	parametres.capital = parametres_.capital;
	parametres.people = parametres_.people;
	parametres.square = parametres_.square;
	parametres.contenent = parametres_.contenent;
}

Country_& Country_::operator=(Country_ d_o)
{
	this->parametres.country_name = d_o.parametres.country_name;
	this->parametres.capital = d_o.parametres.capital;
	this->parametres.people = d_o.parametres.people;
	this->parametres.square = d_o.parametres.square;
	this->parametres.contenent = d_o.parametres.contenent;

	return *this;
}




Index::Index()
{
	indexparametres.phonecode = 0;
	indexparametres.mailcode = 0;
	indexparametres.internetcode = "";
	indexparametres.letter = "";
	indexparametres.countryname = " ";
}

Index::Index(IndexParametres indexparametres_)
{
	indexparametres.phonecode = indexparametres_.phonecode;
	indexparametres.mailcode = indexparametres_.mailcode;
	indexparametres.internetcode = indexparametres_.internetcode;
	indexparametres.letter = indexparametres_.letter;
	indexparametres.countryname = indexparametres_.countryname;
}

Index::~Index()
{

}

void Index::Printindex()
{
	cout << "�������� ������:  " << indexparametres.countryname << endl;
	cout << "���������� ��� ������: " << indexparametres.phonecode << endl;
	cout << "�������� ��� ������: " << indexparametres.mailcode << endl;
	cout << "����� �������� ������ ������: " << indexparametres.internetcode << endl;
	cout << "��� ���: " << indexparametres.letter << endl;

}

void Index::IndexEnter(IndexParametres indexparametres_)
{
	indexparametres.countryname = indexparametres_.countryname;
	indexparametres.phonecode = indexparametres_.phonecode;
	indexparametres.mailcode = indexparametres_.mailcode;
	indexparametres.internetcode = indexparametres_.internetcode;
	indexparametres.letter = indexparametres_.letter;
}

Index& Index::operator=(Index d_o)
{
	this->indexparametres.phonecode = d_o.indexparametres.phonecode;
	this->indexparametres.mailcode = d_o.indexparametres.mailcode;
	this->indexparametres.internetcode = d_o.indexparametres.internetcode;
	this->indexparametres.letter = d_o.indexparametres.letter;
	this->indexparametres.countryname = d_o.indexparametres.countryname;
	return *this;
}