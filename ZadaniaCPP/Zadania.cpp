#include "define.h"
#include "Zadania.h"
#include "Kolekcja.h"
void Zadania::zadanieNr1()
{
	Kolekcja *kolekcja = new Kolekcja();
	kolekcja->wypisanie();
	delete kolekcja;
}
void f1(int p) { //funkcja ,,wisz�ca'' (nie przynale�y do �adnej klasy o zgrozo ;) )
	cout << "Przekazywanie przez warto��: " << p << endl;
	p += 3;
}
void Zadania::zadanieNr2()
{
	//przekazywanie przez warto��:
	int i = 10;
	f1(i);
	cout << "Wartosc i po wyjsciu z funkcji: " << i;
}
