/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * StateSprite.cpp
*/

#include "StateSprite.hpp"

void fg::StateSprite::initialize(std::string filepath, std::string initialStateName)
{
    _origin = fg::Origin::TOP_LEFT;
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
    setOrigin(_origin);
}

void fg::StateSprite::setPosition(float x, float y)
{
    _sprite.setPosition(x, y);
}

void fg::StateSprite::setScale(float x, float y)
{
    _sprite.scale(x, y);
}

void fg::StateSprite::setOrigin(Origin origin)
{
    _origin = origin;
    switch (_origin) {
        case fg::Origin::CENTER:
            _sprite.setOrigin(_sprite.getTexture()->getSize().x / 2, _sprite.getTexture()->getSize().y / 2);
            break;
        case fg::Origin::TOP_LEFT:
            _sprite.setOrigin(0, 0);
            break;
        case fg::Origin::TOP_RIGHT:
            _sprite.setOrigin(_sprite.getTexture()->getSize().x, 0);
            break;
        case fg::Origin::BOTTOM_LEFT:
            _sprite.setOrigin(0, _sprite.getTexture()->getSize().y);
            break;
        case fg::Origin::BOTTOM_RIGHT:
            _sprite.setOrigin(_sprite.getTexture()->getSize().x, _sprite.getTexture()->getSize().y);
            break;
    }
}

std::shared_ptr<sf::Texture> fg::StateSprite::getTexture(std::string stateName)
{
    if (_textures.find(stateName) == _textures.end()) {
        std::cerr << "StateSprite::getTexture: state " << stateName << " not found" << std::endl;
        return nullptr;
    }
    return _textures[stateName];
}

std::string fg::StateSprite::getState() const
{
    return _state;
}

sf::Sprite &fg::StateSprite::getSprite()
{
    return _sprite;
}