/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Entity.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "StateSprite.hpp"
#include "FileWriter.hpp"
#include "AbilityList.hpp"
#include "RandomGenerator.hpp"

namespace fg
{
    enum class Class
    {
        Crusader,
        Vestal,
        Arbalest,
        Barbarian,
        Thief,
        Mercenary,
        Occlutist,
        PlagueDoctor,
        Monster
    };

    class Entity 
    {
        public:
            Entity() = default;
            Entity(const std::string &filepath);
            ~Entity() = default;

            void save();
            void save(const std::string &filepath);
            void load();
            void load(const std::string &filepath);

            void createAbility();
            void crusaderAbility();
            void vestalAbility();
            void arbalestAbility();
            void barbarianAbility();
            void thiefAbility();
            void mercenaryAbility();
            void occlutistAbility();
            void plagueDoctorAbility();
            void monsterAbility();

            void setFilepath(const std::string &filepath);

            std::string &getFilepath();
            fg::StateSprite &getStateSprite();
            sf::Sprite &getSprite();

            // Entity functions
            void setName(const std::string &name);
            void setClass(fg::Class className);
            void addAbility(int abilityId, fg::Ability &ability);
            void setLevel(int level);
            void setHealth(int health);
            void setMaxHealth(int maxHealth);
            void setInitiative(int initiative);
            void setSanity(int sanity);

            std::string &getName();
            fg::Class getClass();
            fg::Ability &getAbility(int abilityNumber);
            int getLevel();
            int getHealth();
            int getMaxHealth();
            int getInitiative();
            int getSanity();


        private:
            std::string _filepath;
            fg::StateSprite _sprite;
            std::string _name;
            fg::Class _className;
            fg::AbilityList _abilityList;
            
            int _level;
            int _health;
            int _maxHealth;
            int _initiative;
            int _sanity;

    };
};