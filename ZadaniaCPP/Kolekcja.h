#pragma once
#include "define.h"
class Kolekcja
{
protected:
	vector<string> vec;
public:
	Kolekcja(char wersja, unsigned int ileP = 0); //drugi konstruktor - przeci¹¿ony
	virtual string formatowanie(const string& txt);
	void wypisanie();
	~Kolekcja();//w C++ mo¿na do klasy zdefiniowaæ tzw. destruktor
};

