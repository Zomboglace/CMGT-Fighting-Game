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
    std::cout << "DragSpriteManager::registerDragSprite: registered DragSprite with id " << dragSprite.getID() << " and dragIndex " << dragSprite.getDragIndex() << std::endl;
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

