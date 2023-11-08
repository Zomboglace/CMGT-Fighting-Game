/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Hud.hpp
*/

#pragma once

#include <iostream>
#include "ButtonSprite.hpp"
#include "Rectangle.hpp"
#include "Entity.hpp"

namespace fg
{
    enum class GameSceneState
    {
        FIGHT,
        CAMP,
        GAMEOVER,
        WIN,
        EXIT,
        PAUSE
    };
    class Hud
    {
        public:
            Hud();
            ~Hud() = default;

            void initialize();

            void event(sf::RenderWindow &window, sf::Event &event);
            void update(sf::RenderWindow &window);
            void draw(sf::RenderWindow &window);

            void setHudForEntity(Entity &entity);
            void changeScene(GameSceneState state);


        private:
            GameSceneState _state;

            // Fight information
            fg::Rectangle _background;
            bool _entitySelected;
            fg::ButtonSprite _attack1;
            fg::ButtonSprite _attack2;
            fg::ButtonSprite _attack3;
            fg::ButtonSprite _attack4;
            fg::ButtonSprite _switchPosition;
            fg::ButtonSprite _skip;

            // Camp information




    };
}