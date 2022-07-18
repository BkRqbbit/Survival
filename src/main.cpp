#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

int main(){
    sf::VideoMode windowDimensions(1280, 720);
    std::string windowTitle = "Survival - The End Of Our Times";
    sf::RenderWindow window( windowDimensions, windowTitle , sf::Style::Titlebar | sf::Style::Close);
    return 0;
}