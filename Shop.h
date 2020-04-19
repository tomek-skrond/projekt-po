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
	sf::Texture arrow1;
	sf::Texture arrow2;
	sf::Texture pudzian;

	void initWindow();
public:

	Shop();
	virtual ~Shop();

	void updateSFMLEvents();
	void update();
	void loadTexture(const std::string &screen,sf::Texture &texture);
	void render();
	void run(const std::string &screen = MAIN_SCREEN);
	void loadSprite(const std::string &name,sf::Texture &texture);
	bool isSpriteClicked(sf::Sprite &spr,sf::Mouse &mouse);
	//void whichScreen(const std::string &screen);
};
#endif
