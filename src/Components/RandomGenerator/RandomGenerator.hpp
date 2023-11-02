/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * RandomGenerator.hpp
*/

#pragma once

#include <iostream>
#include <random>

namespace fg
{
    class Random
    {
        public:
            Random() = default;
            ~Random() = default;

            static int getRandomNumber(int max);
            static int getRandomNumber(int min, int max);
            static float getRandomNumber(float max);
            static float getRandomNumber(float min, float max);
            static bool getRandomBool();
    };
}