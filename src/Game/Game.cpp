#include "Game.h"

Game::Game(int width, int height, std::string title){
    this->initWindow(width, height, title);
}

void Game::initWindow( int width, int height, std::string title ){
    sf::VideoMode vm( width, height );
    this->window = new sf::RenderWindow( vm, title, sf::Style::Titlebar | sf::Style::Close );
    this->window->setFramerateLimit(60);
    this->window->setPosition(sf::Vector2i( width/4, height/4 ));
}

void Game::run(){
    while( this->window->isOpen() ){
        this->updateEvents();
        this->update();
    }
}

void Game::updateEvents(){
    while( this->window->pollEvent( this->event ) ){
            switch( this->event.type ){
                case sf::Event::Closed:
                    this->window->close();
                    break;
                default: break;
            }
    }
}

void Game::update(){
    this->window->clear();
    this->render();
    this->window->display();
}

void Game::render(){
    // Render elements
}