#pragma once
#include <string>

class Produkt
{
protected:
	std::string nazwa;
	int ilosc;
	float cena;
	int kod;

public:
	Produkt();
	void sprzedaj(int ile);
	const int pokazIlosc();
	const int skanujKod();
};

