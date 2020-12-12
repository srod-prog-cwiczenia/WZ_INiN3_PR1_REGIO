#include "Kolekcja.h"

Kolekcja::Kolekcja()
{
	//dopisujemy 10 liczb:
	/*for (int i = 0; i < 10; i++)
		vec.push_back(to_string(i));*/
	vec = { "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };
	
}

void Kolekcja::wypisanie()
{
	/*r�ne wersje p�tli po elementach kolekcji celem wypisania:*/

	//wersja ,,archaiczna":
	//cout << "Elementy wektora vec (petla for po int): " << endl;
	//for (int i = 0; i < vec.size(); i++)
	//	cout << vec[i] << endl;

	/*inna wersja, korzystaj�ca z tzw. iterator�w (to takie a la wska�niki
	ale dotycz�ce tylko kolekcji), r�wnie� do�� archaiczna */
	//cout << "Elementy wektora vec (petla po iteratorach): " << endl;
	//for (/*vector<string>::iterator*/auto ite = vec.begin(); ite != vec.end(); ite++) {
	//	cout << *ite << endl;
	//}

	/*wersja ,,wsp�czesna"*/
	cout << "Elementy wektora vec (petla foreach): " << endl;
	for (const auto &ele : vec) //tak ,,lepiej'', ale 
		//mo�na po prostu tak: for (auto ele : vec)
		cout << ele << endl;
}
