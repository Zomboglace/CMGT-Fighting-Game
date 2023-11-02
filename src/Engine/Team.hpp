/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Team.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Entity.hpp"

namespace fg
{
    class Team
    {
        public:
            Team() = default;
            Team(const std::string &filepath, bool isPlayerTeam = false);
            ~Team() = default;

            // void generateEnnemyTeam(int stage, int difficulty);
            // void generateRandomTeam(int size, int level = 0);
            // void generateRandomEntity(int level = 0);

            void setRandomPosition();
            void swapEntitiesPosition(int pos1, int pos2);
            void swapEntityForward(int pos);
            void swapEntityBackward(int pos);

            void addEntity(const std::string &filepath);
            void removeEntity(int pos);
            void removeEntity(fg::Entity &entity);
            fg::Entity &getEntity(int pos);

            void save();
            void save(const std::string &filepath);
            void load();
            void load(const std::string &filepath);

            void setFilepath(const std::string &filepath);
            void setIsPlayerTeam(bool isPlayerTeam);

            std::string &getFilepath();
            std::vector<std::pair<fg::Entity, int>> &getEntities();
            bool getIsPlayerTeam();
            

        private:
            std::string _filepath;
            std::vector<std::pair<fg::Entity, int>> _entities;
            bool _isPlayerTeam;

    };
};