#pragma once
#include "Country_.h"
#include <vector>
#include "Functions.h"
namespace Country {

	class CountryList
	{
	private:
		vector<Country_> list;
		string filename = "Input.txt";
	public:
		Country_ c;
		int list_size() {
			return list.size();
		}
		Country_ get(int pos) {
			try {
				if (pos >= 0 && pos < list.size()) {
					return list[pos];
				}
			}
			catch (int pos) {
				throw "Error: counrty not found!!!";
			}
		}

		void Load()
		{
			ifstream reading(filename);
			setlocale(LC_ALL, "utf-8");
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			int n = 0;
			string s;
			if (reading) {
				Parametres parametres;
				getline(reading, s);
				n = stoi(s);

				Country_ c;

				for (int i = 0; i < n; i++) {
					//reading >> parametres.country_name >> parametres.square >> parametres.capital >> parametres.people >> parametres.contenent;
					
					getline(reading, s);
					parametres.country_name = s;

					getline(reading, s);
					parametres.square = stoi(s);

					getline(reading, s);
					parametres.capital = s;

					getline(reading, s);
					parametres.people = stoi(s);

					getline(reading, s);
					parametres.contenent = s;

					c.CountryEnter(parametres);

					list.push_back(c);

				}
			}
			reading.close();
		}
	};
}
