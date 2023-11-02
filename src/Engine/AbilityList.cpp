/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * AbilityList.cpp
*/

#include "AbilityList.hpp"

void fg::AbilityList::addAbility(int abilityId, fg::Ability &ability)
{
    _abilityList[abilityId] = ability;
}

void fg::AbilityList::addAbility(int abilityId, int level, std::string &name, std::string &description, int precision, int critical, std::function<void(fg::Entity &)> lambda)
{
    fg::Ability ability;
    ability.initialize(name, description, precision, critical, lambda);
    ability.setLevel(level);
    _abilityList[abilityId] = ability;
}

std::unordered_map<int, fg::Ability> &fg::AbilityList::getAbilityList()
{
    return _abilityList;
}

fg::Ability &fg::AbilityList::getAbility(int abilityId)
{
    return _abilityList[abilityId];
}