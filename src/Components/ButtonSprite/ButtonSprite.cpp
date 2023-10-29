/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * ButtonSprite.cpp
*/

#include "ButtonSprite.hpp"

fg::ButtonSprite::ButtonSprite()
    : _hover(false), 
    _click(false), 
    _hovering(false),
    _holding(false),
    _holdingThis(false),
    _clickLambda(nullptr),
    _hoverLambda(nullptr)
{}

void fg::ButtonSprite::initialize(std::string filepath)
{
    _buttonTexture.loadFromFile(filepath);
    _buttonSprite.setTexture(_buttonTexture);
}

void fg::ButtonSprite::setClick(bool click, std::string filepath, std::function<void()> lambda)
{
    if (click) {
        _buttonTextureClick.loadFromFile(filepath);
        _click = true;
        _clickLambda = lambda;
    }
}

void fg::ButtonSprite::setHover(bool hover, std::string filepath, std::function<void()> lambda)
{
    if (hover) {
        _buttonTextureHover.loadFromFile(filepath);
        _hover = true;
        _hoverLambda = lambda;
    }
}

void fg::ButtonSprite::setText(bool text, std::string filepath, std::string textString, int size, sf::Color color, float x, float y)
{
    if (text) {
        _text.initialize(_buttonSprite, filepath, textString, size, color, x, y);
    }
}

void fg::ButtonSprite::setSoundClick(bool sound, std::string filepath, float volume)
{
    if (sound) {
        _soundClick.initialize(filepath);
        _soundClick.setVolume(volume);
        _clickSound = true;
    }
}

void fg::ButtonSprite::setSoundHover(bool sound, std::string filepath, float volume)
{
    if (sound) {
        _soundHover.initialize(filepath);
        _soundHover.setVolume(volume);
        _hoverSound = true;
    }
}

void fg::ButtonSprite::event(sf::RenderWindow &window, sf::Event &event)
{
    click(event);
    hover(event);
}

void fg::ButtonSprite::click(sf::Event &event)
{
    if (!_click)
        return;
    if (event.type == sf::Event::MouseButtonPressed) {
        _holding = true;
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_buttonSprite.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y)) {
                _buttonSprite.setTexture(_buttonTextureClick);
                _holdingThis = true;
            }
        }
    }
    if (event.type == sf::Event::MouseButtonReleased) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_buttonSprite.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y)) {
                if (_clickSound)
                    _soundClick.play();
                if (_clickLambda != nullptr && _holdingThis) {
                    _clickLambda();
                }
            }
            _buttonSprite.setTexture(_buttonTexture);
        }
        _holding = false;
        _holdingThis = false;
    }
}

void fg::ButtonSprite::hover(sf::Event &event)
{
    if (!_hover)
        return;
    if (event.type == sf::Event::MouseMoved) {
        if (_holding)
            return;
        if (_buttonSprite.getGlobalBounds().contains(event.mouseMove.x, event.mouseMove.y)) {
            _buttonSprite.setTexture(_buttonTextureHover);
            if (_hoverLambda != nullptr) {
                _clickLambda();
            }
            if (!_hovering) {
                _hovering = true;
                if (_hoverSound)
                    _soundHover.play();
            }
        } else {
            _hovering = false;
            if (!_holdingThis)
                _buttonSprite.setTexture(_buttonTexture);
        }
    }
}

void fg::ButtonSprite::setPosition(float x, float y)
{
    _buttonSprite.setPosition(x, y);
}

void fg::ButtonSprite::scale(float x, float y)
{
    _buttonSprite.scale(x, y);
}

void fg::ButtonSprite::setVolume(float volume)
{
    _soundClick.setVolume(volume);
    _soundHover.setVolume(volume);
}

sf::Texture &fg::ButtonSprite::getTexture()
{
    return _buttonTexture;
}

sf::Sprite &fg::ButtonSprite::getSprite()
{
    return _buttonSprite;
}

sf::Text &fg::ButtonSprite::getText()
{
    return _text.getText();
}

sf::Sound &fg::ButtonSprite::getSoundClick()
{
    return _soundClick.getSound();
}

sf::Sound &fg::ButtonSprite::getSoundHover()
{
    return _soundHover.getSound();
}