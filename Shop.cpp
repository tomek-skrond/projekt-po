#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>

#include<iostream>
#include<ctime>
#include<cstdlib>

#include "Shop.h"

void Shop::initWindow(){
	this->window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "game");
}

Shop::Shop(){
	this->initWindow();
}

Shop::~Shop(){
	delete this->window;
}

void Shop::updateSFMLEvents(){
	
		while (this->window->pollEvent(this->sfEvent)) {
			if (this->sfEvent.type == sf::Event::Closed) {
				this->window->close();
			}
		}
}

void Shop::update(){
	this->updateSFMLEvents();
}

void Shop::loadTexture(const std::string &screen){

	this->t.loadFromFile(screen);
}

void Shop::render(){

	sf::Sprite s(this->t);
	this->window->clear(sf::Color::White);
	window->draw(s);
	this->window->display();
}

void Shop::run(){
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(MAIN_SCREEN);
		this->render();
	}
}
