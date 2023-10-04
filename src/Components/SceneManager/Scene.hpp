/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Scene.hpp
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "SceneManager.hpp"

namespace fg
{
    class SceneManager;
    class Scene
    {
        public:
            Scene(SceneManager &sceneManager) : _sceneManager(sceneManager) {}

            virtual void event(sf::RenderWindow &window, sf::Event &event) = 0;
            virtual void update(sf::RenderWindow &window) = 0;
            virtual void draw(sf::RenderWindow &window) = 0;
        
        protected:
            SceneManager &_sceneManager;
    };
}