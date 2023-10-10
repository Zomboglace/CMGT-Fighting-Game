/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * StateSprite.cpp
*/

#include "StateSprite.hpp"

void fg::StateSprite::initialize(std::string filepath, std::string initialStateName)
{
    _textures[initialStateName].loadFromFile(filepath);
    _state = initialStateName;
    _sprite.setTexture(_textures[_state]);
}

void fg::StateSprite::addState(std::string filepath, std::string stateName)
{
    if (_textures.find(stateName) != _textures.end()) {
        std::cerr << "StateSprite::addState: state " << stateName << " already exists" << std::endl;
        return;
    }
    _textures[stateName].loadFromFile(filepath);
}

void fg::StateSprite::changeState(std::string stateName)
{
    if (_textures.find(stateName) == _textures.end()) {
        std::cerr << "StateSprite::changeState: state " << stateName << " not found" << std::endl;
        return;
    }
    _state = stateName;
    _sprite.setTexture(_textures[_state]);
}

std::string fg::StateSprite::getState() const
{
    return _state;
}

sf::Sprite &fg::StateSprite::getSprite()
{
    return _sprite;
}