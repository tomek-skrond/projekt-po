#include "Produkt.h"

Produkt::Produkt() 
{
	nazwa = "test";
}

void Produkt::sprzedaj(int ile)
{
	ilosc -= ile;
}

const int Produkt::pokazIlosc()
{
	return ilosc;
}

const int Produkt::skanujKod()
{
	return kod;
}
