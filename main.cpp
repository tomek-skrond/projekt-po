#include<iostream>
#include<ctime>
#include<cstdlib>

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>

#include "Shop.h"
#include "Produkt.h"
#include "Warzywa.h"

int main()
{
	Shop shop;
	
	Warzywa Marchewka("Marchewka", (0,5), "Polska", 923147);
	Warzywa Ziemniaki("Ziemniaki", (2), "Polska", 145234);
	Warzywa Pomidory ("Pomidory", (1), "Holandia", 529402);
	Warzywa Ogorki("Ogorki", (0, 75), "Niemcy", 646223);
	
	shop.run();

	return 0;
}