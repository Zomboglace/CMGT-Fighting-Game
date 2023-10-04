/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * AnimatedSprite.hpp
*/

#pragma once

#include <SFML/Graphics.hpp>

namespace fg
{
    class AnimatedSprite {
        public:
            AnimatedSprite() = default;
            ~AnimatedSprite() = default;

            void initialize(std::string filepath, float timePerFrame, int sizeX, int sizeY, int frames);
            void update();

            void scale(float x, float y);
            void setPosition(float x, float y);

            sf::Texture &getTexture();
            sf::Sprite &getSprite();
            float getElapsedTime();
            float getTimeInterval();
            void setTimeInterval(float timePerFrame);

        private:
            sf::Texture _texture;
            sf::Sprite _sprite;
            sf::Clock _clock;
            float _timePerFrame;
            int _sizeX;
            int _sizeY;
            int _currentFrame;
            int _numberOfFrames;
            float _timeSinceLastUpdate;
            
    };
};