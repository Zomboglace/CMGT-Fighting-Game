/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * DragSprite.cpp
*/

#include "DragSprite.hpp"

fg::DragSprite::DragSprite()
    : _id(0),
    _initialized(false),
    _hasTexture(false),
    _filepath(""),
    _canBeDragged(false),
    _canTakeDrop(false),
    _isDragged(false),
    _dragIndex(0)
{
}

void fg::DragSprite::initialize(int sizeX, int sizeY, sf::Color color, int dragIndex)
{
    _emptyShape.setSize(sf::Vector2f(sizeX, sizeY));
    _emptyShape.setFillColor(sf::Color::Black);
    _emptyShape.setOutlineColor(color);
    _emptyShape.setOutlineThickness(3);
    _initialized = true;
    _initializedEmpty = true;
    _hasTexture = false;
    _canBeDragged = false;
    _canTakeDrop = true;
    _dragIndex = dragIndex;
}

void fg::DragSprite::initialize(std::string filepath, int dragIndex)
{
    sf::Texture texture;
    texture.loadFromFile(filepath);
    if (!texture.loadFromFile(filepath)) {
        std::cerr << "DragSprite::initialize: failed to load texture " << filepath << std::endl;
        initialize(20, 20, sf::Color::Red);
        return;
    }
    _texture = std::make_shared<sf::Texture>(texture);
    _sprite.setTexture(*_texture);
    _draggedSprite.setTexture(*_texture);
    _initialized = true;
    _initializedTexture = true;
    _hasTexture = true;
    _filepath = filepath;
    _canBeDragged = true;
    _canTakeDrop = false;
    _dragIndex = dragIndex;
}

void fg::DragSprite::draw(sf::RenderWindow &window)
{
    if (!_initialized) {
        std::cerr << "DragSprite::draw: DragSprite not initialized" << std::endl;
        return;
    }
    if (_initializedEmpty) {
        window.draw(_emptyShape);
    }
    if (_hasTexture) {
        window.draw(_sprite);
        if (_isDragged) {
            window.draw(_draggedSprite);
        }
    }
    
}

void fg::DragSprite::event(sf::RenderWindow &window, sf::Event &event)
{
    if (!_initialized) {
        std::cerr << "DragSprite::event: DragSprite not initialized" << std::endl;
        return;
    }
    startDrag(window, event);
    drag(window, event);
    drop(window, event);
    removeDrop(window, event);
}

void fg::DragSprite::event(sf::RenderWindow &window, sf::Event &event, DragSprite &dragSprite)
{
    if (!_initialized) {
        std::cerr << "DragSprite::event: DragSprite not initialized" << std::endl;
        return;
    }
    drop(window, event, dragSprite);
}

void fg::DragSprite::startDrag(sf::RenderWindow &window, sf::Event &event)
{
    if (event.type == sf::Event::MouseButtonPressed) {
        if (!_canBeDragged) {
            return;
        }
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_sprite.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y))) {
                _isDragged = true;
            }
        }
    }
}

void fg::DragSprite::drag(sf::RenderWindow &window, sf::Event &event)
{
    if (event.type == sf::Event::MouseMoved && _isDragged) {
        _draggedSprite.setPosition(event.mouseMove.x - _sprite.getGlobalBounds().width / 2, event.mouseMove.y - _sprite.getGlobalBounds().height / 2);
    }
}

void fg::DragSprite::drop(sf::RenderWindow &window, sf::Event &event, DragSprite &dragSprite)
{   
    if (event.type == sf::Event::MouseButtonReleased) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_canTakeDrop && dragSprite.getIsDragged()) {
                sf::FloatRect bounds;
                if (_hasTexture)
                    bounds = _sprite.getGlobalBounds();
                else
                    bounds = _emptyShape.getGlobalBounds();
                if (bounds.contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y))) {
                    _texture = dragSprite.getTexture();
                    _sprite.setTexture(*_texture);
                    _sprite.setPosition(_position);
                    _hasTexture = true;
                }
            }
        }
    }
}

void fg::DragSprite::drop(sf::RenderWindow &window, sf::Event &event)
{
    if (event.type == sf::Event::MouseButtonReleased) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_isDragged) {
                _isDragged = false;
                _draggedSprite.setPosition(_sprite.getPosition());
            }
        }
    }
}

void fg::DragSprite::removeDrop(sf::RenderWindow &window, sf::Event &event)
{
    if (event.type == sf::Event::MouseButtonReleased) {
        if (event.mouseButton.button == sf::Mouse::Right) {

            if (_canTakeDrop && _hasTexture) {
                sf::FloatRect bounds;
                if (_hasTexture)
                    bounds = _sprite.getGlobalBounds();
                else
                    bounds = _emptyShape.getGlobalBounds();
                if (bounds.contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y))) {
                    _hasTexture = false;
                }
            }
        }
    }
}

void fg::DragSprite::setPosition(float x, float y)
{
    if (!_initialized) {
        std::cerr << "DragSprite::setPosition: DragSprite not initialized" << std::endl;
        return;
    }
    _position = sf::Vector2f(x, y);
    if (_hasTexture) {
        _sprite.setPosition(_position);
        _draggedSprite.setPosition(_position);
    } else {
        _emptyShape.setPosition(_position);
    }
}

void fg::DragSprite::setScale(float x, float y)
{
    if (!_initialized) {
        std::cerr << "DragSprite::setScale: DragSprite not initialized" << std::endl;
        return;
    }
    _scale = sf::Vector2f(x, y);
    if (_hasTexture) {
        _sprite.setScale(_scale);
    } else {
        _emptyShape.setScale(_scale);
    }
}

void fg::DragSprite::setID(unsigned int id)
{
    _id = id;
}

void fg::DragSprite::setCanBeDragged(bool canBeDragged)
{
    _canBeDragged = canBeDragged;
}

void fg::DragSprite::setCanTakeDrop(bool canTakeDrop)
{
    _canTakeDrop = canTakeDrop;
}

void fg::DragSprite::setIsDragged(bool isDragged)
{
    _isDragged = isDragged;
}

void fg::DragSprite::setDragIndex(int dragIndex)
{
    _dragIndex = dragIndex;
}

unsigned int fg::DragSprite::getID()
{
    return _id;
}

bool fg::DragSprite::getCanBeDragged()
{
    return _canBeDragged;
}

bool fg::DragSprite::getCanTakeDrop()
{
    return _canTakeDrop;
}

bool fg::DragSprite::getIsDragged()
{
    return _isDragged;
}

int fg::DragSprite::getDragIndex()
{
    return _dragIndex;
}

std::shared_ptr<sf::Texture> fg::DragSprite::getTexture()
{
    if (!_initialized) {
        std::cerr << "DragSprite::getTexture: DragSprite not initialized" << std::endl;
        return nullptr;
    }
    return _texture;
}