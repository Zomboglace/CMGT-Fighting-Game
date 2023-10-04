/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * GameScene.hpp
*/

#pragma once

#include <iostream>
#include "Scene.hpp"
#include "AnimatedSprite.hpp"
#include "ButtonSprite.hpp"
#include "Music.hpp"

namespace fg
{
    class GameScene : public Scene
    {
        public:
            GameScene(SceneManager &sceneManager);
            ~GameScene() = default;

            void event(sf::RenderWindow &window, sf::Event &event) override;
            void update(sf::RenderWindow &window) override;
            void draw(sf::RenderWindow &window) override;

        private:
            // fg::AnimatedSprite _animatedBackground;
            fg::ButtonSprite _buttonStart;
            // fg::Music _music;
    };
};