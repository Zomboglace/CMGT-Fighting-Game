/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * DragSprite.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>

namespace fg
{
    class DragSprite
    {
        public:
            DragSprite();
            ~DragSprite() = default;

            void initialize(int sizeX, int sizeY, sf::Color color, int dragIndex = 0);
            void initialize(std::string filepath, int dragIndex = 0);

            void draw(sf::RenderWindow &window);

            void event(sf::RenderWindow &window, sf::Event &event);
            void event(sf::RenderWindow &window, sf::Event &event, DragSprite &dragSprite);
            void startDrag(sf::RenderWindow &window, sf::Event &event);
            void drag(sf::RenderWindow &window, sf::Event &event);
            void drop(sf::RenderWindow &window, sf::Event &event, DragSprite &dragSprite);
            void drop(sf::RenderWindow &window, sf::Event &event);
            void removeDrop(sf::RenderWindow &window, sf::Event &event);

            void setPosition(float x, float y);
            void setScale(float x, float y);

            void setID(unsigned int id);
            void setCanBeDragged(bool canBeDragged);
            void setCanTakeDrop(bool canTakeDrop);
            void setIsDragged(bool isDragged);
            void setDragIndex(int dragIndex);
            void setFilePath(std::string filepath);
            void setClassFilePath(std::string filepath);

            unsigned int getID();
            bool getCanBeDragged();
            bool getCanTakeDrop();
            bool getIsDragged();
            int getDragIndex();


            std::shared_ptr<sf::Texture> getTexture();
            sf::Sprite &getSprite();
            sf::Sprite &getDraggedSprite();
            std::string getFilePath();
            std::string getClassFilePath();



        private:
            unsigned int _id;
            bool _initialized;
            bool _initializedEmpty;
            bool _initializedTexture;
            bool _hasTexture;

            // No texture
            sf::RectangleShape _emptyShape;

            // Texture
            std::shared_ptr<sf::Texture> _texture;
            sf::Sprite _sprite;
            sf::Sprite _draggedSprite;

            sf::Vector2f _position;
            sf::Vector2f _draggedPosition;

            sf::Vector2f _scale;

            std::string _filepath;
            std::string _classFilePath;
            bool _canBeDragged;
            bool _canTakeDrop;
            bool _isDragged;
            int _dragIndex;

    };
};