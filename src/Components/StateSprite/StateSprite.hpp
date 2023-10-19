/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * StateSprite.hpp
*/

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>

namespace fg
{
    class StateSprite
    {
        public:
            StateSprite() = default;
            ~StateSprite() = default;

            void initialize(std::string filepath, std::string initialStateName = "default");

            void addState(std::string filepath, std::string stateName);
            void changeState(std::string stateName);

            void setPosition(float x, float y);
            void scale(float x, float y);

            std::shared_ptr<sf::Texture> getTexture(std::string stateName);
            std::string getState() const;
            sf::Sprite &getSprite();


        private:
            std::map<std::string, std::shared_ptr<sf::Texture>> _textures;
            std::string _state;
            sf::Sprite _sprite;
    };
}