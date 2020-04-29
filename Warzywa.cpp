#include <cstdlib>
#include <time.h>

#include "Warzywa.h"
#include "Produkt.h"

Warzywa::Warzywa(std::string n, float w, std::string p, int k) : Produkt()
{
	nazwa = n;
	waga = w;
	pochodzenie = p;
	kod = k;
	cena = rand() % 8 + 1;
	ilosc = rand() % 50 + 1;
}
