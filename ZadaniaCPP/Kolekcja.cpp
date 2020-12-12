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
	/*ró¿ne wersje pêtli po elementach kolekcji celem wypisania:*/
	//wersja ,,archaiczna":
	cout << "Elementy wektora vec: " << endl;
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;
}
