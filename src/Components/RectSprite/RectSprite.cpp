/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * RectSprite.cpp
*/

#include "RectSprite.hpp"

fg::RectSprite::RectSprite()
    : _sizeX(0),
    _sizeY(0),
    _numberOfFrames(0),
    _currentFrame(0),
    _isVertical(false)
{
}

void fg::RectSprite::initialize(std::string filepath, float sizeX, float sizeY, int frames, int currentFrame, bool isVertical)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
    _numberOfFrames = frames;
    _currentFrame = currentFrame;
    _isVertical = isVertical;
    _rectTexture.loadFromFile(filepath);
    _rectSprite.setTexture(_rectTexture);

    if (_isVertical)
        _rectSprite.setTextureRect(sf::IntRect(0, _currentFrame * _sizeY, _sizeX, _sizeY));
    else
        _rectSprite.setTextureRect(sf::IntRect(_currentFrame * _sizeX, 0, _sizeX, _sizeY));
}

void fg::RectSprite::changeFrame(int frame)
{
    if (frame < 0 || frame >= _numberOfFrames)
        return;
    _currentFrame = frame;
    if (_isVertical)
        _rectSprite.setTextureRect(sf::IntRect(0, _currentFrame * _sizeY, _sizeX, _sizeY));
    else
        _rectSprite.setTextureRect(sf::IntRect(_currentFrame * _sizeX, 0, _sizeX, _sizeY));
}

void fg::RectSprite::draw(sf::RenderWindow &window)
{
    window.draw(_rectSprite);
}

void fg::RectSprite::setPosition(float x, float y)
{
    _rectSprite.setPosition(x, y);
}

void fg::RectSprite::scale(float x, float y)
{
    _rectSprite.scale(x, y);
}

sf::Texture &fg::RectSprite::getTexture()
{
    return _rectTexture;
}

sf::Sprite &fg::RectSprite::getSprite()
{
    return _rectSprite;
}

int fg::RectSprite::getCurrentFrame() const
{
    return _currentFrame;
}