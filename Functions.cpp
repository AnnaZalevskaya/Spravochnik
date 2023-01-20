#include "Functions.h"

//описание функций

string filename = "E:\\универ\\2 курс\\ООП\\2 семестр\\курсовой\\Country\\Country\\x64\\Debug\\Input.txt";

void CountryEnter()
{
	Country_* d;
	int n = 1;
	Parametres parametres;
	int i = 1;
	d = new Country_[i];

	for (int i = 0; i < n; i++) {
		d[i].CountryEnter(parametres);
	}
}
Country_ Country1Reading()
{
	ifstream reading(filename);
	setlocale(LC_ALL, "utf-8");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	Country_ c;

	if (reading) {
		Parametres parametres;
		reading >> n;
		reading >> parametres.country_name >> parametres.square >> parametres.capital >> parametres.people >> parametres.contenent;
		c.CountryEnter(parametres);
	}
	reading.close();
	return c;
}

void CountryReading(Country_* d, int& n)
{
	ifstream reading(filename);
	setlocale(LC_ALL, "utf-8");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	if (reading) {
		Parametres parametres;
		reading >> n;
		if (d != NULL) delete d;
		d = new Country_[n];

		for (int i = 0; i < n; i++) {
			reading >> parametres.country_name >> parametres.square >> parametres.capital >> parametres.people >> parametres.contenent;

			d[i].CountryEnter(parametres);
		}
	}
	reading.close();
}

void Print(Country_ * d, int n) {
	for (int i = 0; i < n; i++) {
		d[i].Print();
	}
}

void CountryChange() {
	Country_* d;
	int n = 1;
	Parametres parametres;
	int _n;
	_n--;

	if (_n >= 0 && _n < n) {
		d[_n].CountryEnter(parametres);
	}
}
void Copy(Country_* d_n, Country_* d_o, int n){
	for (int i = 0; i < n; i++) {
		d_n[i] = d_o[i];
	}
}

void AddCountry(Country_* d, int& n) {
	Parametres parametres;
	Country_* buf = new Country_[n];
	int size = n;
	int new_size = ++n;
	Copy(d, buf, size);
	d = new Country_[new_size];
	Copy(d, buf, n);
	d[n].CountryEnter(parametres);
	delete[] buf;
}

void SortingCountry(Country_* d, int n)
{
	Country_ buf;
	int numofSorted = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i].getParametres().square > d[j].getParametres().square) {

				buf = d[i];
				d[i] = d[j];
				d[j] = buf;

				numofSorted++;
			}
		}
	}

	cout << "Данные отсортированы! \nКоличество сортировок: " << numofSorted << endl;
}
void SaveCountry(Country_* d, int n)
{
	//создать поток для записи в файл

	ofstream record(filename);

	if (record) {
		record << n << endl;

		for (int i = 0; i < n; i++) {
			record << d[i].getParametres().country_name << " " << d[i].getParametres().square << " " << d[i].getParametres().capital << " " << d[i].getParametres().people << " " << d[i].getParametres().contenent;

			if (i < n - 1)
				record << endl;
		}
	}
	else
		cout << "Ошибка открытия файла!" << endl;

	cout << "Данные сохранены в файл: " << filename << endl;

	record.close();
}