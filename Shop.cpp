#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>

#include<iostream>
#include<ctime>
#include<cstdlib>

#include "Shop.h"

//utworzenie okienka aplikacji
void Shop::initWindow(){
	this->window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "game");
}

//konstruktor
Shop::Shop(){
	this->initWindow();
}

//destruktor usuwa wskaznik window
Shop::~Shop(){
	delete this->window;
}

//funkcja obslugujaca zdarzenia
void Shop::updateSFMLEvents(){
	
		while (this->window->pollEvent(this->sfEvent)) {
			if (this->sfEvent.type == sf::Event::Closed) {
				this->window->close();
			}
			//obsluga strzalek zmieniajacych czesci sklepu (work in progress)
			else if (this->sfEvent.type == sf::Event::MouseButtonPressed)
			{
				if (this->sfEvent.mouseButton.button == sf::Mouse::Left)
				{
					
					if ((this->sfEvent.mouseButton.x > 6 && this->sfEvent.mouseButton.x <= 160)
						&& (this->sfEvent.mouseButton.y > 824 && this->sfEvent.mouseButton.y <= 945)) {//x=6 y=824
						std::cout << "left arrow clicked" << std::endl;
					}
					if ((this->sfEvent.mouseButton.x > 1752 && this->sfEvent.mouseButton.x <= 1897)
						&& (this->sfEvent.mouseButton.y > 824 && this->sfEvent.mouseButton.y <= 945)) {
						std::cout << "right arrow clicked" << std::endl;
					}
				}
			}
			

		}
}

void Shop::update(){
	this->updateSFMLEvents();
}

void Shop::loadTexture(const std::string &screen,sf::Texture &texture){

	texture.loadFromFile(screen);
}
//utworzenie sprite'ow narysowanie ich na danych pozycjach
//pudzian to sprzedawca, ale na razie zakomentowalem go
void Shop::render(){
	sf::Sprite s1(this->t);
	sf::Sprite s2(this->arrow1);
	sf::Sprite s3(this->arrow2);
	//sf::Sprite p00dzian(this->pudzian);

	s2.setPosition(1, 780);
	s3.setPosition(1700, 780);
	//p00dzian.setPosition(1400,744);
	this->window->clear(sf::Color::White);
	//draw here
	this->window->draw(s1);
	this->window->draw(s2);
	this->window->draw(s3);
	//this->window->draw(p00dzian);
	//end
	this->window->display();


}

//inicjalizacja funkcji potrzebnych do dzialania programu
void Shop::run(const std::string &screen){
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(screen,t);
		this->loadSprite("arrow.png",arrow1);
		this->loadSprite("arrow_right.png", arrow2);
		//this->loadSprite("pudzion.png", pudzian);
		this->render();
	}
}
//zwraca true gdy dany sprite jest klikniety(work in progress)
bool Shop::isSpriteClicked(sf::Sprite &spr,sf::Mouse &mouse){
	return true;
}

//zaladowanie sprite i nadanie im tekstur
void Shop::loadSprite(const std::string &name,sf::Texture &texture){
	texture.loadFromFile(name);
	sf::Sprite s;
	s.setTexture(texture);
	
}
