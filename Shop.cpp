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
		switch (sfEvent.type) {

		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::MouseButtonPressed:
			//tu dac if na poszczegolne przyciski
			
			
			Shop::klik1();
			break;
		
		}
	}

}

void Shop::update(){
	this->updateSFMLEvents();
}
void Shop::klik1()
{
	sf::Mouse mouse;
	sf::Vector2f position = sf::Vector2f(mouse.getPosition(*window));
	if (position.x >= 10 && position.x <= 230 && position.y <= 1000 && position.y >= 950)
	{
		std::cout << "KLIK" << std::endl;
		Shop::run();
	}
	if (position.x >= 240 && position.x <= 480 && position.y <= 1000 && position.y >= 950)
	{
		
		Shop::NapojeSklep();
	}
	if (position.x >= 490 && position.x <= 730 && position.y <= 1000 && position.y >= 950)
	{

		Shop::WarzywaSklep();
	}
	if (position.x >= 740 && position.x <= 975 && position.y <= 1000 && position.y >= 950)
	{

		Shop::NabialSklep();
	}
	if (position.x >= 975 && position.x <= 1200 && position.y <= 1000 && position.y >= 950)
	{

		Shop::PieczywoSklep();
	}
	
	
}

void Shop::loadTexture(const std::string& screen){

	this->t.loadFromFile(screen);
	
}
void Shop::Strzala1(const std::string &strzal) {

	this->st1.loadFromFile(strzal);
	}
void Shop::Strzala2(const std::string& strzal) {

	this->st2.loadFromFile(strzal);
}
void Shop::Strzala3(const std::string& strzal) {
	this->st3.loadFromFile(strzal);
}
void Shop::Strzala4(const std::string& strzal) {
	this->st4.loadFromFile(strzal);
}
void Shop::Strzala5(const std::string& strzal) {
	this->st5.loadFromFile(strzal);
}
void Shop::Strzala7(const std::string& strzal) {
	this->st7.loadFromFile(strzal);
}



void Shop::render(){

	sf::Sprite s(this->t);
	
	
	//Strzalaka 1 Kasa
	sf::Sprite st1(this->st1);
	st1.setPosition(sf::Vector2f(10, 950));
	st1.setScale(sf::Vector2f(0.5, 0.4));
	//Strzalka 2 Napoje
	sf::Sprite st2(this->st2);
	st2.setPosition(sf::Vector2f(250, 950));
	st2.setScale(sf::Vector2f(0.5, 0.4));
	//Strzalka 3 Warzywka
	sf::Sprite st3(this->st3);
	st3.setPosition(sf::Vector2f(490, 950));
	st3.setScale(sf::Vector2f(0.5, 0.4));
	//Strzalka 4 Nabia³
	sf::Sprite st4(this->st4);
	st4.setPosition(sf::Vector2f(730, 950));
	st4.setScale(sf::Vector2f(0.5, 0.4));
	//Strzalka 5 Pieczywo
	sf::Sprite st5(this->st5);
	st5.setPosition(sf::Vector2f(970, 950));
	st5.setScale(sf::Vector2f(0.5, 0.4));
	//Strzalka 7 koszyk
	sf::Sprite st7(this->st7);
	st7.setPosition(sf::Vector2f(1800, 940));
	st7.setScale(sf::Vector2f(0.15, 0.15));
	st7.setColor( sf::Color(0, 254, 0));
	

	this->window->clear(sf::Color::White);
	
	window->draw(s);
	window->draw(st1);
	window->draw(st2);
	window->draw(st3);
	window->draw(st4);
	window->draw(st5);
	window->draw(st7);
	this->window->display();
	
	this->Strzala1(ST1);
	this->Strzala2(ST2);
	this->Strzala3(ST3);
	this->Strzala4(ST4);
	this->Strzala5(ST5);
	this->Strzala7(ST7);
}


void Shop::run(){
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(MAIN_SCREEN);
		
		this->render();
		

	}
}
void Shop::NapojeSklep() {
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(napojeBg);
		
		this->render();


	}
}
void Shop::WarzywaSklep() {
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(warzywaBg);
		
		this->render();


	}
}
void Shop::NabialSklep() {
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(nabialBg);
		
		this->render();


	}
}
void Shop::PieczywoSklep() {
	while (this->window->isOpen())
	{
		this->update();
		this->loadTexture(pieczywoBg);

		this->render();


	}
}


