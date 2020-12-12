#pragma once
#include "define.h"
class Kolekcja
{
private:
	vector<string> vec;
	vector<int> vI; 
public:
	Kolekcja(); //konstruktor
	void wypisanie();
	~Kolekcja();//w C++ mo¿na do klasy zdefiniowaæ tzw. destruktor
};

