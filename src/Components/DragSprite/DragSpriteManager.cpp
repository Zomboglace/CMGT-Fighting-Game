/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * DragSpriteManager.cpp
*/

#include "DragSpriteManager.hpp"

fg::DragSpriteManager::DragSpriteManager()
    : _id(0)
{
}

void fg::DragSpriteManager::registerDragSprite(DragSprite &dragSprite)
{
    dragSprite.setID(_id);
    _id++;
    _dragSprites.push_back(dragSprite);
}

void fg::DragSpriteManager::draw(sf::RenderWindow &window)
{
    for (auto &dragSprite : _dragSprites) {
        dragSprite.draw(window);
    }
}

void fg::DragSpriteManager::event(sf::RenderWindow &window, sf::Event &event)
{
    for (auto &dragSprite : _dragSprites) {
        for (auto &dragSprite2 : _dragSprites) {
            if (dragSprite.getID() == dragSprite2.getID()) {
                continue;
            }
            if (dragSprite.getDragIndex() != dragSprite2.getDragIndex()) {
                continue;
            }
            dragSprite.event(window, event, dragSprite2);
        }
        dragSprite.event(window, event);
    }
}

fg::DragSprite &fg::DragSpriteManager::getDragSprite(int id)
{
    for (auto &dragSprite : _dragSprites) {
        if (dragSprite.getID() == id) {
            return dragSprite;
        }
    }
    throw std::runtime_error("DragSpriteManager::getDragSprite: DragSprite not found");
}

std::vector<fg::DragSprite> &fg::DragSpriteManager::getDragSprites(int dragIndex)
{
    std::vector<DragSprite> *dragSprites = new std::vector<DragSprite>();

    for (auto &dragSprite : _dragSprites) {
        if (dragSprite.getDragIndex() == dragIndex) {
            dragSprites->push_back(dragSprite);
        }
    }
    return *dragSprites;
}

std::vector<fg::DragSprite> &fg::DragSpriteManager::getDragSprites()
{
    return _dragSprites;
}