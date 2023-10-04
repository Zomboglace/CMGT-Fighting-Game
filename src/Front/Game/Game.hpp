/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Game.hpp
*/

#pragma once

#include <string>
#include <SFML/Graphics.hpp>

#include "RenderWindow.hpp"
#include "SceneManager.hpp"
#include "MainMenuScene.hpp"
#include "GameScene.hpp"

namespace fg
{
    class Game
    {
        public:
            Game();
            ~Game() = default;

            void run();
            void event();
            void update();
            void draw();

        private:
            fg::RenderWindow _window;
            fg::SceneManager _scenes;
            sf::Event _event;
    };
}