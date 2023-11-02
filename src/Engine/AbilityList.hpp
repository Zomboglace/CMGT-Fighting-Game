/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * AbilityList.hpp
*/

#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include "Ability.hpp"

namespace fg
{   
    class AbilityList
    {
        public:
            AbilityList() = default;
            ~AbilityList() = default;

            void addAbility(int abilityId, fg::Ability &ability);
            void addAbility(int abilityId, int level, std::string &name, std::string &description, int precision, int critical, std::function<void(fg::Entity &)> lambda);

            std::unordered_map<int, fg::Ability> &getAbilityList();
            fg::Ability &getAbility(int abilityId);

        private:
            std::unordered_map<int, fg::Ability> _abilityList;
        
    };
}