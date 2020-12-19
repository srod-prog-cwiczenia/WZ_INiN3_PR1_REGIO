#pragma once
#include "Kolekcja.h"
class SformatowanaKolekcja : public Kolekcja
{
public:
	SformatowanaKolekcja(char wersja, unsigned int ileP = 0) : Kolekcja(wersja, ileP) {};
	//nieodzowny konstruktor SformatowanaKolekcja tej postaci bo program siê nie skompiluje
private:
	string formatowanie(const string& txt);
};

