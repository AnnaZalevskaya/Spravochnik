#pragma once
//прототипы функций

#include "Country_.h"

void CountryEnter(); //вввод данных
void CountryReading(Country_* d, int& n);  // чтение из файла
Country_ Country1Reading();
void Print(Country_* d, int n);
void CountryChange();
void Copy(Country_* d_n, Country_* d_o, int n);
void AddCountry(Country_* (&d), int& n);
void SortingCountry(Country_* d, int n);
void SaveCountry(Country_* d, int n);