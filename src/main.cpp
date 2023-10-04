/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * main.cpp
*/

#include "Game.hpp"

int main()
{
    fg::Game game;
    game.run();

    return 0;
}

// #include <SFML/Graphics.hpp>
// #include "Music.hpp"

// int main()
// {
//     sf::RenderWindow _window(sf::VideoMode(1280, 800), "Game");
//     fg::Music _music;
//     _music.initialize("assets/main-menu-music.ogg", 50, 20);
//     _music.play();
//     while (_window.isOpen())
//     {
//         sf::Event _event;
//         while (_window.pollEvent(_event)) {
//             if (_event.type == sf::Event::Closed) {
//                 _window.close();
//             }
//         }
//         _window.clear();
//         _music.update();
//         _window.display();
//     }
//     return 0;
// }