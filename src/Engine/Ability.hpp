/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Ability.hpp
*/

#pragma once

#include <iostream>
#include <functional>

namespace fg
{
    class Entity;
    class Ability
    {
        public:
            Ability() = default;
            ~Ability() = default;

            void initialize(const std::string &name, const std::string &description, int minDamage, int maxDamage, int damageBoostPerLevel, int precision, int precisionBoostPerLevel, int critical, int criticalBoostPerLevel, std::function<std::string(fg::Entity &, fg::Entity &)> lambda);
            std::string attack(fg::Entity &caster, fg::Entity &entity);

            std::string &getName();
            std::string &getDescription();
            int getMinDamage();
            int getMaxDamage();
            int getDamageBoostPerLevel();
            int getPrecision();
            int getPrecisionBoostPerLevel();
            int getCritical();
            int getCriticalBoostPerLevel();
            int getLevel();
            std::function<std::string(fg::Entity &, fg::Entity &)> &getLambda();

            void setName(const std::string &name);
            void setDescription(const std::string &description);
            void setMinDamage(int minDamage);
            void setMaxDamage(int maxDamage);
            void setDamageBoostPerLevel(int damageBoostPerLevel);
            void setPrecision(int precision);
            void setPrecisionBoostPerLevel(int precisionBoostPerLevel);
            void setCritical(int critical);
            void setCriticalBoostPerLevel(int criticalBoostPerLevel);
            void setLevel(int level);
            void setLambda(std::function<std::string(fg::Entity &, fg::Entity &)> lambda);

        private:
            std::string _filepath;
            std::string _name;
            std::string _description;
            std::pair<int, int> _damage;
            int _damageBoostPerLevel;
            int _precision;
            int _precisionBoostPerLevel;
            int _critical;
            int _criticalBoostPerLevel;
            int _level;
            std::function<std::string(fg::Entity &, fg::Entity &)> _lambda;

    };
}