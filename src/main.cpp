#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

int main(){
    int width = 1280;
    int height = 720;
    sf::VideoMode windowSize( width, height );
    std::string windowTitle = "Survival - The End Of Our Times";
    sf::RenderWindow window( windowSize, windowTitle , sf::Style::Titlebar | sf::Style::Close);
    window.setFramerateLimit(60);
    window.setPosition(sf::Vector2i( width/4, height/4 ));

    while( window.isOpen() ){
        sf::Event event;
        while( window.pollEvent( event ) ){
            if( event.type == sf::Event::Closed )
                window.close();
        }
    }
    return 0;
}