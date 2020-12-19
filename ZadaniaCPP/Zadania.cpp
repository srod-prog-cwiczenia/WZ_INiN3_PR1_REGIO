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
void f1(int p) { //funkcja ,,wisz¹ca'' (nie przynale¿y do ¿adnej klasy o zgrozo ;) )
	cout << "Przekazywanie przez wartoœæ: " << p << endl;
	p += 3;
}
void f2(int *p) { //przekazywanie przez wskaŸnik (konstrukcja czêsta w ANSI C):
	cout << "Przekazywanie przez wskaŸnik: " << *p << endl;
	 *p += 3;
}
void f3(int& p) { //prawdziwy tryb przekazywania parametru przez zmienn¹, czêsty w C++ (nie ma go w ANSI C+)
	cout << "Przekazywanie przez wskaŸnik: " << p << endl;
	p += 3;
}
void Zadania::zadanieNr2()
{
	//przekazywanie przez wartoœæ:
	int i = 10;
	f1(i);
	cout << "Wartosc i po wyjsciu z funkcji f1: " << i << endl;
    //przekazywanie przez wskaŸnik (ostro¿nie - to doœæ archaiczny sposób, niezalecany w C++)
	i = 10;
	f2(&i);
	cout << "Wartosc i po wyjsciu z funkcji f2: " << i << endl;
	//prawdziwe przekazywanie przez zmienn¹
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
