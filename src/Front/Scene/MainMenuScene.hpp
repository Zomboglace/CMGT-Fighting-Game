/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * MainMenuScene.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include "Scene.hpp"
#include "AnimatedSprite.hpp"
#include "ButtonSprite.hpp"
#include "RectSprite.hpp"
#include "DragSpriteManager.hpp"
#include "Text.hpp"
#include "Music.hpp"
#include "FileWriter.hpp"

#include "GameScene.hpp"

namespace fg
{
    enum class MainMenuSceneState
    {
        Start,
        Option,
        Play,
        NewGame,
        CharacterSelection,
    };

    class MainMenuScene : public Scene
    {
        public:
            MainMenuScene(SceneManager &sceneManager);
            ~MainMenuScene() = default;

            void initialize();

            void event(sf::RenderWindow &window, sf::Event &event) override;
            void update(sf::RenderWindow &window) override;
            void draw(sf::RenderWindow &window) override;

            void setVolume();
            void setSoundVolume();
            void setMusicVolume();

            void createNewGame(int difficulty);
            void deleteSave(int save);

        private:
            fg::AnimatedSprite _animatedBackground;
            fg::Music _music;
            MainMenuSceneState _state;

            // Start
            fg::ButtonSprite _buttonStart;
            fg::ButtonSprite _buttonOption;
            fg::ButtonSprite _buttonQuit;

            // Option
            int _musicLevel;
            int _soundLevel;
            fg::Text _textMusic;
            fg::Text _textSound;
            fg::ButtonSprite _buttonOptionBack;
            fg::ButtonSprite _buttonOptionMusicDown;
            fg::ButtonSprite _buttonOptionMusicUp;
            fg::ButtonSprite _buttonOptionSoundDown;
            fg::ButtonSprite _buttonOptionSoundUp;
            fg::RectSprite _rectMusicLevel;
            fg::RectSprite _rectSoundLevel;

            // Play
            bool _save1;
            bool _save2;
            bool _save3;
            fg::ButtonSprite _buttonSave1;
            fg::ButtonSprite _buttonSave2;
            fg::ButtonSprite _buttonSave3;
            fg::ButtonSprite _buttonDelete1;
            fg::ButtonSprite _buttonDelete2;
            fg::ButtonSprite _buttonDelete3;
            fg::ButtonSprite _buttonPlayBack;

            // NewGame
            int _save;
            int _difficulty;
            fg::ButtonSprite _buttonNewGameEasy;
            fg::ButtonSprite _buttonNewGameNormal;
            fg::ButtonSprite _buttonNewGameHard;
            fg::ButtonSprite _buttonNewGameInsane;
            fg::ButtonSprite _buttonNewGameBack;

            // CharacterSelection
            int _characterSkin1;
            int _characterSkin2;
            int _characterSkin3;
            int _characterSkin4;
            fg::DragSpriteManager _dragSpriteManager;

            // fg::DragSprite _dragCharacterSelected1;
            // fg::DragSprite _dragCharacterSelected2;
            // fg::DragSprite _dragCharacterSelected3;
            // fg::DragSprite _dragCharacterSelected4;
            // fg::DragSprite _dragCharacterClass1;
            // fg::DragSprite _dragCharacterClass2;
            // fg::DragSprite _dragCharacterClass3;
            // fg::DragSprite _dragCharacterClass4;
            // fg::DragSprite _dragCharacterClass5;
            // fg::DragSprite _dragCharacterClass6;
            fg::ButtonSprite _buttonCharacterSelectionBack;
    };
}