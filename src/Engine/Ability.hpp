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

            void initialize(const std::string &name, const std::string &description, int precision, int critical, std::function<void(fg::Entity &)> lambda);
            void attack(fg::Entity &entity);

            std::string &getName();
            std::string &getDescription();
            int getPrecision();
            int getCritical();
            int getLevel();

            void setName(const std::string &name);
            void setDescription(const std::string &description);
            void setPrecision(int precision);
            void setCritical(int critical);
            void setLevel(int level);
            void setLambda(std::function<void(fg::Entity &)> lambda);

        private:
            std::string _filepath;
            std::string _name;
            std::string _description;
            int _precision;
            int _critical;
            int _level;
            std::function<void(fg::Entity &)> _lambda;

    };
}