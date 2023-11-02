/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * RandomGenerator.cpp
*/

#include "RandomGenerator.hpp"

int fg::Random::getRandomNumber(int max)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, max);

    return dist(mt);
}

int fg::Random::getRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);

    return dist(mt);
}

float fg::Random::getRandomNumber(float max)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(0, max);

    return dist(mt);
}

float fg::Random::getRandomNumber(float min, float max)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(min, max);

    return dist(mt);
}

bool fg::Random::getRandomBool()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 1);

    return dist(mt);
}