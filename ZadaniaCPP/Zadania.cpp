#include "define.h"
#include "Zadania.h"
#include "Kolekcja.h"
void Zadania::zadanieNr1()
{
	Kolekcja *kolekcja = new Kolekcja();
	kolekcja->wypisanie();
	delete kolekcja;
}
