/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * StateSprite.cpp
*/

#include "StateSprite.hpp"

void fg::StateSprite::initialize(std::string filepath, std::string initialStateName)
{
    addState(filepath, initialStateName);
    changeState(initialStateName);
}

void fg::StateSprite::addState(std::string filepath, std::string stateName)
{
    if (_textures.find(stateName) != _textures.end()) {
        std::cerr << "StateSprite::addState: state " << stateName << " already exists" << std::endl;
        return;
    }
    sf::Texture texture;
    texture.loadFromFile(filepath);
    _textures[stateName] = std::make_shared<sf::Texture>(texture);
    // _textures[stateName].loadFromFile(filepath);
}

void fg::StateSprite::changeState(std::string stateName)
{
    if (_textures.find(stateName) == _textures.end()) {
        std::cerr << "StateSprite::changeState: state " << stateName << " not found" << std::endl;
        return;
    }
    _state = stateName;
    _sprite.setTexture(*_textures[_state]);
    _sprite.setTextureRect(sf::IntRect(0, 0, _textures[_state]->getSize().x, _textures[_state]->getSize().y));
}

void fg::StateSprite::setPosition(float x, float y)
{
    _sprite.setPosition(x, y);
}

void fg::StateSprite::scale(float x, float y)
{
    _sprite.scale(x, y);
}

std::string fg::StateSprite::getState() const
{
    return _state;
}

sf::Sprite &fg::StateSprite::getSprite()
{
    return _sprite;
}