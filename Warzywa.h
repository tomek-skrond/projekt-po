#include "Produkt.h"

class Warzywa : public Produkt
{
	std::string pochodzenie;
	float waga;
public:
	Warzywa(std::string n, float w, std::string p, int k);
};
