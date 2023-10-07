/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Game.cpp
*/

#include "Game.hpp"

fg::Game::Game() 
    : _window("Game", 1280, 800, 32),
    _scenes(_window.getRenderWindow())
{
    _window.clear();
    _window.display();
    _scenes.addScene<MainMenuScene>("MainMenuScene");
    _scenes.addScene<GameScene>("GameScene");
    _scenes.switchToScene("MainMenuScene");
}

void fg::Game::run()
{
    while (_window.isOpen())
    {
        while (_window.pollEvent(_event))
            event();
        update();
        draw();
    }
}

void fg::Game::event()
{
    if (_event.type == sf::Event::Closed) {
        _window.close();
    }
    _scenes.eventCurrentScene(_event);
}

void fg::Game::update()
{
    _scenes.updateCurrentScene();
}

void fg::Game::draw()
{
    _scenes.drawCurrentScene();
}