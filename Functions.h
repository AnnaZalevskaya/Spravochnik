#pragma once
//��������� �������

#include "Country_.h"

void CountryEnter(); //����� ������
void CountryReading(Country_* d, int& n);  // ������ �� �����
Country_ Country1Reading();
void Print(Country_* d, int n);
void CountryChange();
void Copy(Country_* d_n, Country_* d_o, int n);
void AddCountry(Country_* (&d), int& n);
void SortingCountry(Country_* d, int n);
void SaveCountry(Country_* d, int n);