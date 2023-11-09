/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Ability.cpp
*/

#include "Ability.hpp"

void fg::Ability::initialize(const std::string &name, const std::string &description, int minDamage, int maxDamage, int damageBoostPerLevel, int precision, int precisionBoostPerLevel, int critical, int criticalBoostPerLevel, std::function<std::string(fg::Entity &, fg::Entity &)> lambda)
{
    _name = name;
    _description = description;
    _damage.first = minDamage;
    _damage.second = maxDamage;
    _damageBoostPerLevel = damageBoostPerLevel;
    _precision = precision;
    _precisionBoostPerLevel = precisionBoostPerLevel;
    _critical = critical;
    _criticalBoostPerLevel = criticalBoostPerLevel;
    _lambda = lambda;
}

std::string fg::Ability::attack(fg::Entity &caster, fg::Entity &target)
{
    return _lambda(caster, target);
}

std::string &fg::Ability::getName()
{
    return _name;
}

std::string &fg::Ability::getDescription()
{
    return _description;
}

int fg::Ability::getMinDamage()
{
    return _damage.first;
}

int fg::Ability::getMaxDamage()
{
    return _damage.second;
}

int fg::Ability::getDamageBoostPerLevel()
{
    return _damageBoostPerLevel;
}

int fg::Ability::getPrecision()
{
    return _precision;
}

int fg::Ability::getPrecisionBoostPerLevel()
{
    return _precisionBoostPerLevel;
}

int fg::Ability::getCritical()
{
    return _critical;
}

int fg::Ability::getCriticalBoostPerLevel()
{
    return _criticalBoostPerLevel;
}

int fg::Ability::getLevel()
{
    return _level;
}

std::function<std::string(fg::Entity &, fg::Entity &)> &fg::Ability::getLambda()
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

void fg::Ability::setMinDamage(int minDamage)
{
    _damage.first = minDamage;
}

void fg::Ability::setMaxDamage(int maxDamage)
{
    _damage.second = maxDamage;
}

void fg::Ability::setDamageBoostPerLevel(int damageBoostPerLevel)
{
    _damageBoostPerLevel = damageBoostPerLevel;
}

void fg::Ability::setPrecision(int precision)
{
    _precision = precision;
}

void fg::Ability::setPrecisionBoostPerLevel(int precisionBoostPerLevel)
{
    _precisionBoostPerLevel = precisionBoostPerLevel;
}

void fg::Ability::setCritical(int critical)
{
    _critical = critical;
}

void fg::Ability::setCriticalBoostPerLevel(int criticalBoostPerLevel)
{
    _criticalBoostPerLevel = criticalBoostPerLevel;
}

void fg::Ability::setLevel(int level)
{
    _level = level;
}

void fg::Ability::setLambda(std::function<std::string(fg::Entity &, fg::Entity &)> lambda)
{
    _lambda = lambda;
}