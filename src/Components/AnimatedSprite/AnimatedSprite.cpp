/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * AnimatedSprite.cpp
*/

#include "AnimatedSprite.hpp"

void fg::AnimatedSprite::initialize(std::string filepath, float timePerFrame, int sizeX, int sizeY, int frames)
{
    _timePerFrame = timePerFrame;
    _sizeX = sizeX;
    _sizeY = sizeY;
    _currentFrame = 0;
    _numberOfFrames = frames;
    _timeSinceLastUpdate = 0;
    _texture.loadFromFile(filepath);
    _sprite.setTexture(_texture);
}

void fg::AnimatedSprite::update()
{
    _timeSinceLastUpdate += _clock.restart().asSeconds();
    if (_timeSinceLastUpdate >= _timePerFrame) {
        _currentFrame = (_currentFrame + 1) % _numberOfFrames;
        _sprite.setTextureRect(sf::IntRect(0, _currentFrame * _sizeY, _sizeX, _sizeY));
        _timeSinceLastUpdate -= _timePerFrame;
    }
}

void fg::AnimatedSprite::scale(float x, float y)
{
    _sprite.scale(x, y);
}

void fg::AnimatedSprite::setPosition(float x, float y)
{
    _sprite.setPosition(x, y);
}

sf::Texture &fg::AnimatedSprite::getTexture()
{
    return _texture;
}

sf::Sprite &fg::AnimatedSprite::getSprite()
{
    return _sprite;
}

float fg::AnimatedSprite::getElapsedTime()
{
    return _clock.getElapsedTime().asSeconds();
}

float fg::AnimatedSprite::getTimeInterval()
{
    return _timePerFrame;
}

void fg::AnimatedSprite::setTimeInterval(float timePerFrame)
{
    _timePerFrame = timePerFrame;
}

