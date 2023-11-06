/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * HealthBar.hpp
*/

#pragma once

#include <iostream>
#include "FillShape.hpp"

namespace fg 
{
    class HealthBar
    {
        public:
            HealthBar();
            HealthBar(int maxHealth);
            HealthBar(int maxHealth, int health);
            ~HealthBar() = default;

            void initialize(sf::Color outlineColor, sf::Color fillColor, sf::Color backgroundColor);

            void update();
            void draw(sf::RenderWindow &window);

            void setPosition(float x, float y);
            void setSize(float x, float y);

            void addHealth(int health);
            void removeHealth(int health);

            void setHealth(int health);
            void setMaxHealth(int maxHealth);

            FillShape &getFillShape();

        private:
            FillShape _healthBar;
            int _health;
            int _maxHealth;
    };
}