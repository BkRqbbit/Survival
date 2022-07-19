#include "Game/Game.h"

const int width = 1280;
const int height = 720;
const std::string title = "Survival - The End Of Our Times";

int main(){
    Game game(width, height, title);
    game.run();
    return 0;
}