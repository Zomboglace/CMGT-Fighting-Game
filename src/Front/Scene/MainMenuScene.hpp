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
#include "Text.hpp"
#include "Music.hpp"
#include "FileWriter.hpp"

namespace fg
{
    enum class MainMenuSceneState
    {
        Start,
        Option
    };

    class MainMenuScene : public Scene
    {
        public:
            MainMenuScene(SceneManager &sceneManager);
            ~MainMenuScene() = default;

            void event(sf::RenderWindow &window, sf::Event &event) override;
            void update(sf::RenderWindow &window) override;
            void draw(sf::RenderWindow &window) override;

            void setVolume(float volume);

        private:
            fg::AnimatedSprite _animatedBackground;
            fg::Music _music;
            MainMenuSceneState _state;
            fg::FileWriter _fileWriter;

            fg::ButtonSprite _buttonStart;
            fg::ButtonSprite _buttonOption;
            fg::ButtonSprite _buttonQuit;

            float _musicVolume;
            float _soundVolume;
            fg::Text _textMusic;
            fg::Text _textSound;
            fg::ButtonSprite _buttonOptionBack;
            fg::ButtonSprite _buttonOptionMusicDown;
            fg::ButtonSprite _buttonOptionMusicUp;
            fg::ButtonSprite _buttonOptionSoundDown;
            fg::ButtonSprite _buttonOptionSoundUp;
            fg::RectSprite _musicLevel;
            fg::RectSprite _soundLevel;
    };
}