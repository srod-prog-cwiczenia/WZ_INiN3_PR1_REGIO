#include "Kolekcja.h"

Kolekcja::Kolekcja(char wersja, unsigned int ileP)
{
	//dopisujemy 10 liczb:
	/*for (int i = 0; i < 10; i++)
		vec.push_back(to_string(i));*/
	switch (wersja) {
	case 't': //dni tygodnia
		vec = { "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };
		break;
	case 'l':// do zadanej liczby
		for (unsigned int i = 1; i <= ileP; i++) {
			vec.push_back("liczba: " + to_string(i));
		}
		break;
	default:
		break;
	}
}

string Kolekcja::formatowanie(const string& txt)
{
	return txt;
}

void Kolekcja::wypisanie()
{
	/*ró¿ne wersje pêtli po elementach kolekcji celem wypisania:*/

	//wersja ,,archaiczna":
	//cout << "Elementy wektora vec (petla for po int): " << endl;
	//for (int i = 0; i < vec.size(); i++)
	//	cout << vec[i] << endl;

	/*inna wersja, korzystaj¹ca z tzw. iteratorów (to takie a la wskaŸniki
	ale dotycz¹ce tylko kolekcji), równie¿ doœæ archaiczna */
	//cout << "Elementy wektora vec (petla po iteratorach): " << endl;
	//for (/*vector<string>::iterator*/auto ite = vec.begin(); ite != vec.end(); ite++) {
	//	cout << *ite << endl;
	//}

	/*wersja ,,wspó³czesna"*/
	cout << "Elementy wektora vec (petla foreach): " << endl;
	for (const auto &ele : vec) //tak ,,lepiej'', ale 
		//mo¿na po prostu tak: for (auto ele : vec)
		cout << formatowanie(ele) << endl;
}

Kolekcja::~Kolekcja()
{
	//na razie nic tu nie ma :)
}
