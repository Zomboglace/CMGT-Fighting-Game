/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * MainMenuScene.cpp
*/

#include "MainMenuScene.hpp"

fg::MainMenuScene::MainMenuScene(SceneManager &sceneManager)
    : Scene(sceneManager),
    _state(MainMenuSceneState::Start),
    _musicLevel(0),
    _soundLevel(0)
{
    int width = _sceneManager.getWindow().getSize().x;
    int height = _sceneManager.getWindow().getSize().y;

    // Loading option
    try {
        if (_fileWriter.load("option.cmgt")) {
            _musicLevel = _fileWriter.getData<float>("music_level");
            _soundLevel = _fileWriter.getData<float>("sound_level");

            if (_musicLevel < 0 || _musicLevel > 7)
                _musicLevel = 0;
            if (_soundLevel < 0 || _soundLevel > 7)
                _soundLevel = 0;
        }
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    

    // Initialize background
    _animatedBackground.initialize("assets/background-16.png", 0.1f, 770, 370, 16);
    _animatedBackground.setPosition((width-(770*2.16))/2, (height-(370*2.16))/2);
    _animatedBackground.scale(2.16, 2.16);

    // Initialize music
    _music.initialize("assets/main-menu-music.ogg", 100, 10.0f);
    _music.setLoop(true);

    // Initialize start
    // Start button
    _buttonStart.initialize("assets/button.png");
    _buttonStart.setPosition(50, 200);
    _buttonStart.setClick(true, "assets/button-hover.png", [&](){
        _sceneManager.switchToScene("GameScene");
    });
    _buttonStart.setHover(true, "assets/button-hover.png");
    _buttonStart.setText(true, "assets/atwriter.ttf", "Start", 48, sf::Color::White, 0, -12);
    _buttonStart.setSoundClick(true, "assets/button-click.ogg");
    _buttonStart.setSoundHover(true, "assets/button-hover.ogg");
    // Option button
    _buttonOption.initialize("assets/button.png");
    _buttonOption.setPosition(50, 350);
    _buttonOption.setClick(true, "assets/button-hover.png", [&](){
        _state = MainMenuSceneState::Option;
    });
    _buttonOption.setHover(true, "assets/button-hover.png");
    _buttonOption.setText(true, "assets/atwriter.ttf", "Option", 48, sf::Color::White, 0, -12);
    _buttonOption.setSoundClick(true, "assets/button-click.ogg");
    _buttonOption.setSoundHover(true, "assets/button-hover.ogg");
    // Quit button
    _buttonQuit.initialize("assets/button.png");
    _buttonQuit.setPosition(50, 500);
    _buttonQuit.setClick(true, "assets/button-hover.png", [&](){
        _sceneManager.getWindow().close();
    });
    _buttonQuit.setHover(true, "assets/button-hover.png");
    _buttonQuit.setText(true, "assets/atwriter.ttf", "Quit", 48, sf::Color::White, 0, -12);
    _buttonQuit.setSoundClick(true, "assets/button-click.ogg");
    _buttonQuit.setSoundHover(true, "assets/button-hover.ogg");


    // Initialize option
    // Music text
    _textMusic.initialize("assets/atwriter.ttf", "Music", 48, sf::Color::White, 230, 150);
    // Sound text
    _textSound.initialize("assets/atwriter.ttf", "Sound", 48, sf::Color::White, 230, 300);
    // Back button
    _buttonOptionBack.initialize("assets/button.png");
    _buttonOptionBack.setPosition(50, 500);
    _buttonOptionBack.setClick(true, "assets/button-hover.png", [&](){
        _state = MainMenuSceneState::Start;
        _fileWriter.addData("music_level", _rectMusicLevel.getCurrentFrame());
        _fileWriter.addData("sound_level", _rectSoundLevel.getCurrentFrame());
        _fileWriter.save("option.cmgt");
    });
    _buttonOptionBack.setHover(true, "assets/button-hover.png");
    _buttonOptionBack.setText(true, "assets/atwriter.ttf", "Done", 48, sf::Color::White, 0, -12);
    _buttonOptionBack.setSoundClick(true, "assets/button-click.ogg");
    _buttonOptionBack.setSoundHover(true, "assets/button-hover.ogg");
    
    // Music down button
    _buttonOptionMusicDown.initialize("assets/arrow-left.png");
    _buttonOptionMusicDown.setPosition(130, 220);
    _buttonOptionMusicDown.setClick(true, "assets/arrow-left.png", [&](){
        _rectMusicLevel.changeFrame(_rectMusicLevel.getCurrentFrame() + 1);
        _musicLevel = _rectMusicLevel.getCurrentFrame();
        setMusicVolume();
    });
    _buttonOptionMusicDown.scale(6, 6);
    _buttonOptionMusicDown.setSoundClick(true, "assets/button-click.ogg");

    // Music up button
    _buttonOptionMusicUp.initialize("assets/arrow-right.png");
    _buttonOptionMusicUp.setPosition(400, 220);
    _buttonOptionMusicUp.setClick(true, "assets/arrow-right.png", [&](){
        _rectMusicLevel.changeFrame(_rectMusicLevel.getCurrentFrame() - 1);
        _musicLevel = _rectMusicLevel.getCurrentFrame();
        setMusicVolume();
    });
    _buttonOptionMusicUp.scale(6, 6);
    _buttonOptionMusicUp.setSoundClick(true, "assets/button-click.ogg");
    

    // Sound down button
    _buttonOptionSoundDown.initialize("assets/arrow-left.png");
    _buttonOptionSoundDown.setPosition(130, 370);
    _buttonOptionSoundDown.setClick(true, "assets/arrow-left.png", [&](){
        _rectSoundLevel.changeFrame(_rectSoundLevel.getCurrentFrame() + 1);
        _soundLevel = _rectSoundLevel.getCurrentFrame();
        setSoundVolume();
    });
    _buttonOptionSoundDown.scale(6, 6);
    _buttonOptionSoundDown.setSoundClick(true, "assets/button-click.ogg");
    // Sound up button
    _buttonOptionSoundUp.initialize("assets/arrow-right.png");
    _buttonOptionSoundUp.setPosition(400, 370);
    _buttonOptionSoundUp.setClick(true, "assets/arrow-right.png", [&](){
        _rectSoundLevel.changeFrame(_rectSoundLevel.getCurrentFrame() - 1);
        _soundLevel = _rectSoundLevel.getCurrentFrame();
        setSoundVolume();
    });
    _buttonOptionSoundUp.scale(6, 6);
    _buttonOptionSoundUp.setSoundClick(true, "assets/button-click.ogg");
    // Music level sprite
    _rectMusicLevel.initialize("assets/volume.png", 37, 14, 8, _musicLevel, false);
    _rectMusicLevel.setPosition(220, 225);
    _rectMusicLevel.scale(4, 4);
    // Sound level sprite
    _rectSoundLevel.initialize("assets/volume.png", 37, 14, 8, _soundLevel, false);
    _rectSoundLevel.setPosition(220, 375);
    _rectSoundLevel.scale(4, 4);

    setVolume();
}

void fg::MainMenuScene::event(sf::RenderWindow &window, sf::Event &event)
{
    if (_state == MainMenuSceneState::Start) {
        _buttonStart.click(event);
        _buttonStart.hover(event);
        _buttonOption.click(event);
        _buttonOption.hover(event);
        _buttonQuit.click(event);
        _buttonQuit.hover(event);
    }
    if (_state == MainMenuSceneState::Option) {
        _buttonOptionBack.click(event);
        _buttonOptionBack.hover(event);
        _buttonOptionMusicDown.click(event);
        _buttonOptionMusicDown.hover(event);
        _buttonOptionMusicUp.click(event);
        _buttonOptionMusicUp.hover(event);
        _buttonOptionSoundDown.click(event);
        _buttonOptionSoundDown.hover(event);
        _buttonOptionSoundUp.click(event);
        _buttonOptionSoundUp.hover(event);
    }
}

void fg::MainMenuScene::update(sf::RenderWindow &window)
{
    _animatedBackground.update();
    _music.update();
}

void fg::MainMenuScene::draw(sf::RenderWindow &window)
{
    window.draw(_animatedBackground.getSprite());
    if (_state == MainMenuSceneState::Start) {
        window.draw(_buttonStart.getSprite());
        window.draw(_buttonStart.getText());
        window.draw(_buttonOption.getSprite());
        window.draw(_buttonOption.getText());
        window.draw(_buttonQuit.getSprite());
        window.draw(_buttonQuit.getText());
    }
    if (_state == MainMenuSceneState::Option) {
        window.draw(_textMusic.getText());
        window.draw(_textSound.getText());
        window.draw(_buttonOptionBack.getSprite());
        window.draw(_buttonOptionBack.getText());
        window.draw(_buttonOptionMusicDown.getSprite());
        window.draw(_buttonOptionMusicUp.getSprite());
        window.draw(_buttonOptionSoundDown.getSprite());
        window.draw(_buttonOptionSoundUp.getSprite());
        window.draw(_rectMusicLevel.getSprite());
        window.draw(_rectSoundLevel.getSprite());
    }
}

void fg::MainMenuScene::setVolume()
{
    setSoundVolume();
    setMusicVolume();
}

void fg::MainMenuScene::setSoundVolume()
{
    float soundVolume = 98 / 7 * (7 - _soundLevel);
    _buttonStart.setVolume(soundVolume);
    _buttonOption.setVolume(soundVolume);
    _buttonQuit.setVolume(soundVolume);
    _buttonOptionBack.setVolume(soundVolume);
    _buttonOptionMusicDown.setVolume(soundVolume);
    _buttonOptionMusicUp.setVolume(soundVolume);
    _buttonOptionSoundDown.setVolume(soundVolume);
    _buttonOptionSoundUp.setVolume(soundVolume);
}

void fg::MainMenuScene::setMusicVolume()
{
    float musicVolume = 98 / 7 * (7 - _musicLevel);
    _music.setVolume(musicVolume);
}