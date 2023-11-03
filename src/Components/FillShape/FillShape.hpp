/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * FillShape.hpp
*/

#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

namespace fg
{
    class FillShape
    {
        public:
            FillShape();
            ~FillShape() = default;

            void initialize(sf::Color outlineColor, sf::Color fillColor, sf::Color backgroundColor);

            void update();
            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void setSize(float x, float y);
            void setOutlineThickness(float thickness);
            void setOutlineColor(sf::Color color);
            void setFillColor(sf::Color color);
            void setBackgroundColor(sf::Color color);
            void setPercentageFilled(float percentage);
            void setLerpTimeInSeconds(float time);

            void lerpPercentageFilled(float targetPercentage);
            void lerpUpdate();

            sf::Vector2f getPosition();
            sf::Vector2f getSize();
            sf::Color getOutlineColor();
            sf::Color getFillColor();
            sf::Color getBackgroundColor();
            float getPercentageFilled();
            float getTargetPercentageFilled();

        private:
            sf::RectangleShape _shape;
            sf::RectangleShape _background;
            sf::Vector2f _position;
            sf::Vector2f _size;
            sf::Color _outlineColor;
            sf::Color _fillColor;
            sf::Color _backgroundColor;

            float _percentageFilled;
            float _realTimePercentageFilled;
            float _targetPercentageFilled;
            float _lerpTime;

            sf::Clock _lerpClock;



    };
}