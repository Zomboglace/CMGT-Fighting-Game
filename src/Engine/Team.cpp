/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Team.cpp
*/

#include "Team.hpp"

fg::Team::Team(const std::string &filepath, bool isPlayerTeam)
    : _filepath(filepath),
    _isPlayerTeam(isPlayerTeam)
{
    load();
}

// void fg::Team::generateEnnemyTeam(int stage, int difficulty)
// {

// }

// void fg::Team::generateRandomTeam(int size, int level)
// {
//     for (int i = 0; i < size; i++)
//         generateRandomEntity(level);
// }

// void fg::Team::generateRandomEntity(int level)
// {
//     fg::Entity entity("");
//     entity.generateEntity(level);
//     addEntity(entity.getFilepath());
// }

void fg::Team::setRandomPosition()
{
    int entityNumber = _entities.size();
    int availablePositions[entityNumber];

    for (int i = 0; i < entityNumber; i++)
        availablePositions[i] = i;

    for (int i = 0; i < entityNumber; i++) {
        int randomPosition = rand() % entityNumber;
        int temp = availablePositions[i];
        availablePositions[i] = availablePositions[randomPosition];
        availablePositions[randomPosition] = temp;
    }

    for (int i = 0; i < entityNumber; i++)
        _entities[i].second = availablePositions[i];
}

void fg::Team::swapEntitiesPosition(int pos1, int pos2)
{
    for (int i = 0; i < _entities.size(); i++) {
        if (_entities[i].second == pos1)
            _entities[i].second = pos2;
        else if (_entities[i].second == pos2)
            _entities[i].second = pos1;
    }
}

void fg::Team::swapEntityForward(int pos)
{
    if (pos == 0)
        return;
    swapEntitiesPosition(pos, pos - 1);
}

void fg::Team::swapEntityBackward(int pos)
{
    if (pos == _entities.size() - 1)
        return;
    swapEntitiesPosition(pos, pos + 1);
}

void fg::Team::addEntity(const std::string &filepath)
{
    int pos = _entities.size();
    _entities.push_back(std::pair<Entity, int>(Entity(filepath), pos));
}

void fg::Team::removeEntity(int index)
{
    for (int i = 0; i < _entities.size(); i++) {
        if (_entities[i].second == index) {
            _entities.erase(_entities.begin() + i);
            return;
        }
    }
}

void fg::Team::removeEntity(fg::Entity &entity)
{
    for (int i = 0; i < _entities.size(); i++) {
        if (&_entities[i].first == &entity) {
            _entities.erase(_entities.begin() + i);
            return;
        }
    }
}

fg::Entity &fg::Team::getEntity(int pos)
{
    for (int i = 0; i < _entities.size(); i++) {
        if (_entities[i].second == pos)
            return _entities[i].first;
    }
    return _entities[0].first;
}

void fg::Team::save()
{
    fg::FileWriter file(_filepath);
    int alive = _entities.size();
    file.addData("alive", alive);
    for (int i = 0; i < _entities.size(); i++) {
        fg::Entity entity = getEntity(i);
        file.addData(std::to_string(i), entity.getFilepath());
        entity.save();
    }
    file.save();
}

void fg::Team::save(const std::string &filepath)
{
    _filepath = filepath;
    save();
}

void fg::Team::load()
{
    try {
        std::cout << YELLOW << "Loading team " << _filepath << "..." << RESET << std::endl;
        fg::FileWriter file(_filepath);
        if (file.load()) {
            int alive = file.getData<int>("alive");
            for (int i = 0; i < alive; i++) {
                std::string name = std::to_string(i);
                std::string entityFilepath = file.getData<std::string>(name);
                _entities.push_back(std::make_pair(Entity(entityFilepath), i));
            }
            std::cout << GREEN << "Team " << _filepath << " loaded!" << RESET << std::endl;
        } else {
            throw std::invalid_argument("Team " + _filepath + " not found!");
        }
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
        throw std::invalid_argument(e.what());
    }


    
    for (auto &entity : _entities) {
        if (_isPlayerTeam)
            entity.first.getStateSprite().setScale(0.35, 0.35);
        else
            entity.first.getStateSprite().setScale(-0.35, 0.35);
        if (_isPlayerTeam)
            entity.first.getStateSprite().setOrigin(fg::Origin::BOTTOM_LEFT);
        else
            entity.first.getStateSprite().setOrigin(fg::Origin::BOTTOM_RIGHT);
    }
}

void fg::Team::load(const std::string &filepath)
{
    _filepath = filepath;
    load();
}

void fg::Team::setFilepath(const std::string &filepath)
{
    _filepath = filepath;
}

void fg::Team::setIsPlayerTeam(bool isPlayerTeam)
{
    _isPlayerTeam = isPlayerTeam;
}

std::vector<std::pair<fg::Entity, int>> &fg::Team::getEntities()
{
    return _entities;
}

std::string &fg::Team::getFilepath()
{
    return _filepath;
}

bool fg::Team::getIsPlayerTeam()
{
    return _isPlayerTeam;
}