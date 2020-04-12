#ifndef __GAME_H_
#define __GAME_H_

#include<iostream>
#include<ctime>
#include<cstdlib>

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>

const std::string MAIN_SCREEN = "shop_layout.png";

//dwie inne czesci sklepu, na razie niedostepne
/*const std::string RIGHT_SCREEN = "shop_layout.png";
const std::string LEFT_SCREEN = "shop_layout.png";*/


class Shop
{
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Texture t;

	void initWindow();
public:

	Shop();
	virtual ~Shop();

	void updateSFMLEvents();
	void update();
	void loadTexture(const std::string &screen);
	void render();
	void run();
};
#endif
