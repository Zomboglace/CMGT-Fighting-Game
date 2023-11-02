/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * DragSpriteManager.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>

#include "DragSprite.hpp"

namespace fg
{
    class DragSpriteManager
    {
        public:
            DragSpriteManager();
            ~DragSpriteManager() = default;

            void registerDragSprite(DragSprite &dragSprite);

            void draw(sf::RenderWindow &window);

            void event(sf::RenderWindow &window, sf::Event &event);

            DragSprite &getDragSprite(int id);
            std::vector<DragSprite> &getDragSprites(int dragIndex);
            std::vector<DragSprite> &getDragSprites();

        private:
            unsigned int _id;
            std::vector<DragSprite> _dragSprites;
    };
};