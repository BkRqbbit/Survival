#ifndef GAME_H
#define GAME_H

#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

class Game{
    private:
        // Private attributes
        sf::RenderWindow* window;
        sf::Event event;

        // Private functions
        void initWindow( int width, int height, std::string title );

    public:
        // Public functions
        Game(int width, int height, std::string title);
        void run();
        void updateEvents();
        void update();
        void render();
};

#endif