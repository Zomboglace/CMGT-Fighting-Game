/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * GameScene.hpp
*/

#pragma once

#include <iostream>
#include <array>
#include "Scene.hpp"
#include "FileWriter.hpp"
#include "Team.hpp"
#include "Entity.hpp"
#include "Hud.hpp"

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

    class GameScene : public Scene
    {
        public:
            GameScene(SceneManager &sceneManager);
            GameScene(SceneManager &sceneManager, int save);
            ~GameScene() = default;

            void initialize();

            void event(sf::RenderWindow &window, sf::Event &event) override;
            void update(sf::RenderWindow &window) override;
            void draw(sf::RenderWindow &window) override;

            void save();
            void load();


            // Fight functions
            void calculateInitiative();
            void nextTurn();


            void changeSpriteState(int pos, std::string stateName);

            // Camp functions

        private:
            // Game information
            int _save;
            int _difficulty;
            GameSceneState _state;
            int _stage;
            int _courage;
            fg::Team _playerTeam;
            fg::Team _enemyTeam;


            // Game objects
            fg::StateSprite _background;

            // Fight
            std::vector<std::pair<int, int>> _initiativeOrder;
            int _currentEntityTurn;
            fg::Hud _hud;

            
            // Camp
    };
};