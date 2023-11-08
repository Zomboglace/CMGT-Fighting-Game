/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * RectSprite.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

namespace fg
{
    class RectSprite
    {
        public:
            RectSprite();
            ~RectSprite() = default;

            void initialize(std::string filepath, float sizeX, float sizeY, int frames, int currentFrame, bool isVertical = false);
            void changeFrame(int frame);

            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void scale(float x, float y);

            sf::Texture &getTexture();
            sf::Sprite &getSprite();
            int getCurrentFrame() const;

        private:
            sf::Texture _rectTexture;
            sf::Sprite _rectSprite;
            int _sizeX;
            int _sizeY;
            int _numberOfFrames;
            int _currentFrame;
            bool _isVertical;
    };
};