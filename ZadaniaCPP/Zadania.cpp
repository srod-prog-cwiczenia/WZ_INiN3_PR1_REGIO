#include "define.h"
#include "Zadania.h"
#include "Kolekcja.h"
#include "SformatowanaKolekcja.h"
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
void f2(int *p) { //przekazywanie przez wska�nik (konstrukcja cz�sta w ANSI C):
	cout << "Przekazywanie przez wska�nik: " << *p << endl;
	 *p += 3;
}
void f3(int& p) { //prawdziwy tryb przekazywania parametru przez zmienn�, cz�sty w C++ (nie ma go w ANSI C+)
	cout << "Przekazywanie przez wska�nik: " << p << endl;
	p += 3;
}
void Zadania::zadanieNr2()
{
	//przekazywanie przez warto��:
	int i = 10;
	f1(i);
	cout << "Wartosc i po wyjsciu z funkcji f1: " << i << endl;
    //przekazywanie przez wska�nik (ostro�nie - to do�� archaiczny spos�b, niezalecany w C++)
	i = 10;
	f2(&i);
	cout << "Wartosc i po wyjsciu z funkcji f2: " << i << endl;
	//prawdziwe przekazywanie przez zmienn�
	i = 10;
	f3(i);
	cout << "Wartosc i po wyjsciu z funkcji f3: " << i << endl;
}

void Zadania::zadanieNr3()
{
	SformatowanaKolekcja * kolekcja = new SformatowanaKolekcja();
	kolekcja->wypisanie();
	delete kolekcja;
}
