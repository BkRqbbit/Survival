#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

int main(){
    sf::VideoMode windowDimensions(1280, 720);
    std::string windowTitle = "Survival - The End Of Our Times";
    sf::RenderWindow window( windowDimensions, windowTitle , sf::Style::Titlebar | sf::Style::Close);

    while( window.isOpen() ){
        sf::Event event;
        while( window.pollEvent( event ) ){
            if( event.type == sf::Event::Closed )
                window.close();
        }
    }
    return 0;
}