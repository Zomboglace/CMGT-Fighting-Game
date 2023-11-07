/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Ability.cpp
*/

#include "Ability.hpp"

void fg::Ability::initialize(const std::string &name, const std::string &description, int precision, int critical, std::function<void(fg::Entity &)> lambda)
{
    _name = name;
    _description = description;
    _precision = precision;
    _critical = critical;
    _lambda = lambda;
}

void fg::Ability::attack(fg::Entity &entity)
{
    _lambda(entity);
}

std::string &fg::Ability::getName()
{
    return _name;
}

std::string &fg::Ability::getDescription()
{
    return _description;
}

int fg::Ability::getPrecision()
{
    return _precision;
}

int fg::Ability::getCritical()
{
    return _critical;
}

int fg::Ability::getLevel()
{
    return _level;
}

std::function<void(fg::Entity &)> &fg::Ability::getLambda()
{
    return _lambda;
}

void fg::Ability::setName(const std::string &name)
{
    _name = name;
}

void fg::Ability::setDescription(const std::string &description)
{
    _description = description;
}

void fg::Ability::setPrecision(int precision)
{
    _precision = precision;
}

void fg::Ability::setCritical(int critical)
{
    _critical = critical;
}

void fg::Ability::setLevel(int level)
{
    _level = level;
}

void fg::Ability::setLambda(std::function<void(fg::Entity &)> lambda)
{
    _lambda = lambda;
}