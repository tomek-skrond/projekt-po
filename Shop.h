#ifndef __GAME_H_
#define __GAME_H_

#include<iostream>
#include<ctime>
#include<cstdlib>

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>

const std::string MAIN_SCREEN = "img/shop_layout.png";
const std::string tlo1 = "img/tlo.jpg";
const std::string napojeBg = "img/Napoje.jpg";
const std::string warzywaBg = "img/warzywa.jpg";
const std::string pieczywoBg = "img/pieczywo.jpg";
const std::string nabialBg = "img/nabial.jpg";
const std::string ST1 = "img/button1.png";
const std::string ST2 = "img/button2.png";
const std::string ST3 = "img/button3.png";
const std::string ST4 = "img/button4.png";
const std::string ST5 = "img/button5.png";
const std::string ST6 = "img/button6.png";
const std::string ST7 = "img/koszyk.png";




//dwie inne czesci sklepu, na razie niedostepne
/*const std::string RIGHT_SCREEN = "shop_layout.png";
const std::string LEFT_SCREEN = "shop_layout.png";*/


class Shop
{
	sf::RenderWindow *window;
	sf::Event sfEvent;
	
	sf::Texture t;
	sf::Texture st1;
	sf::Texture st2;
	sf::Texture st3;
	sf::Texture st4;
	sf::Texture st5;
	sf::Texture st6;
	sf::Texture st7;

	void initWindow();
public:

	Shop();
	virtual ~Shop();
	void klik1();
	void updateSFMLEvents();
	void update();
	void loadTexture(const std::string& screen);
	void render();
	void run();
	void NapojeSklep();
	void WarzywaSklep();
	void NabialSklep();
	void PieczywoSklep();
	void Strzala1(const std::string &strzal);
	void Strzala2(const std::string& strzal);
	void Strzala3(const std::string& strzal);
	void Strzala4(const std::string& strzal);
	void Strzala5(const std::string& strzal);
	void Strzala6(const std::string& strzal);
	void Strzala7(const std::string& strzal);
};


#endif
//const std::string& screen