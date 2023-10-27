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
    _soundLevel(0),
    _save1(false),
    _save2(false),
    _save3(false)
{
    initialize();
}

void fg::MainMenuScene::initialize()
{
    int width = _sceneManager.getWindow().getSize().x;
    int height = _sceneManager.getWindow().getSize().y;

    // Loading option
    try {
        std::cout << YELLOW << "Loading option file..." << RESET << std::endl;
        fg::FileWriter fileWriter;
        if (fileWriter.load("save/option.cmgt")) {
            _musicLevel = fileWriter.getData<float>("music_level");
            _soundLevel = fileWriter.getData<float>("sound_level");

            if (_musicLevel < 0 || _musicLevel > 7)
                _musicLevel = 0;
            if (_soundLevel < 0 || _soundLevel > 7)
                _soundLevel = 0;
            std::cout << GREEN << "Option file loaded!" << RESET << std::endl;
        } else
            throw std::invalid_argument("File option.cmgt not found");
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
        fg::FileWriter fileWriter;
        fileWriter.deleteFile(std::string("save/option.cmgt"));
        std::cout << YELLOW << "Creating new option file..." << RESET << std::endl;
        fileWriter.addData("music_level", 0);
        fileWriter.addData("sound_level", 0);
        fileWriter.save("save/option.cmgt");
        std::cout << GREEN << "Option file created" << RESET << std::endl;
    }
    

    // Initialize background
    _animatedBackground.initialize("assets/background-16.png", 0.1f, 770, 370, 16);
    _animatedBackground.setPosition((width-(770*2.16))/2, (height-(370*2.16))/2);
    _animatedBackground.scale(2.16, 2.16);

    // Initialize music
    _music.initialize("assets/main-menu-music.ogg", 100, 10.0f);
    _music.setLoop(true);

    /*
    ** Initialize start
    */

    // Play button
    _buttonStart.initialize("assets/button.png");
    _buttonStart.setPosition(50, 200);
    _buttonStart.setClick(true, "assets/button-hover.png", [&](){
        // _sceneManager.switchToScene("GameScene");
        _state = MainMenuSceneState::Play;
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

    /*
    ** Initialize option
    */

    // Music text
    _textMusic.initialize("assets/atwriter.ttf", "Music", 48, sf::Color::White, 230, 150);
    // Sound text
    _textSound.initialize("assets/atwriter.ttf", "Sound", 48, sf::Color::White, 230, 300);
    // Done button
    _buttonOptionBack.initialize("assets/button.png");
    _buttonOptionBack.setPosition(50, 500);
    _buttonOptionBack.setClick(true, "assets/button-hover.png", [&](){
        _state = MainMenuSceneState::Start;
        fg::FileWriter fileWriter;
        fileWriter.addData("music_level", _rectMusicLevel.getCurrentFrame());
        fileWriter.addData("sound_level", _rectSoundLevel.getCurrentFrame());
        fileWriter.save("save/option.cmgt");
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

    /*
    ** Initialize Play
    */

   // Loading save
    try {
        std::cout << YELLOW << "Loading save file..." << RESET << std::endl;
        fg::FileWriter fileWriter;
        if (fileWriter.load("save/save.cmgt")) {
            _save1 = fileWriter.getData<bool>("save1");
            _save2 = fileWriter.getData<bool>("save2");
            _save3 = fileWriter.getData<bool>("save3");
            std::cout << GREEN << "Save file loaded!" << RESET << std::endl;
        } else
            throw std::invalid_argument("File save.cmgt not found");
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
        FileWriter fileWriter;
        fileWriter.deleteFile(std::string("save/save.cmgt"));
        std::cout << YELLOW << "Creating new save file..." << RESET << std::endl;
        fileWriter.addData("save1", false);
        fileWriter.addData("save2", false);
        fileWriter.addData("save3", false);
        fileWriter.save("save/save.cmgt");
        std::cout << GREEN << "Save file created" << RESET << std::endl;
    }
    // Save 1 button
    _buttonSave1.initialize("assets/button.png");
    _buttonSave1.setPosition(50, 200);
    _buttonSave1.setClick(true, "assets/button-hover.png", [&](){
        if (_save1)
            _sceneManager.switchToSceneWithArgs<GameScene>("GameScene", 1);
        else {
            _save = 1;
            _state = MainMenuSceneState::NewGame;
        }
    });
    _buttonSave1.setHover(true, "assets/button-hover.png");
    _buttonSave1.setText(true, "assets/atwriter.ttf", _save1 ? "Save 1" : "New Game", 48, sf::Color::White, 0, -12);
    _buttonSave1.setSoundClick(true, "assets/button-click.ogg");
    _buttonSave1.setSoundHover(true, "assets/button-hover.ogg");
    // Save 2 button
    _buttonSave2.initialize("assets/button.png");
    _buttonSave2.setPosition(50, 350);
    _buttonSave2.setClick(true, "assets/button-hover.png", [&](){
        if (_save2)
            _sceneManager.switchToSceneWithArgs<GameScene>("GameScene", 2);
        else {
            _save = 2;
            _state = MainMenuSceneState::NewGame;
        }
    });
    _buttonSave2.setHover(true, "assets/button-hover.png");
    _buttonSave2.setText(true, "assets/atwriter.ttf", _save2 ? "Save 2" : "New Game", 48, sf::Color::White, 0, -12);
    _buttonSave2.setSoundClick(true, "assets/button-click.ogg");
    _buttonSave2.setSoundHover(true, "assets/button-hover.ogg");
    // Save 3 button
    _buttonSave3.initialize("assets/button.png");
    _buttonSave3.setPosition(50, 500);
    _buttonSave3.setClick(true, "assets/button-hover.png", [&](){
        if (_save3)
            _sceneManager.switchToSceneWithArgs<GameScene>("GameScene", 3);
        else {
            _save = 3;
            _state = MainMenuSceneState::NewGame;
        }
    });
    _buttonSave3.setHover(true, "assets/button-hover.png");
    _buttonSave3.setText(true, "assets/atwriter.ttf", _save3 ? "Save 3" : "New Game", 48, sf::Color::White, 0, -12);
    _buttonSave3.setSoundClick(true, "assets/button-click.ogg");
    _buttonSave3.setSoundHover(true, "assets/button-hover.ogg");
    // Delete 1 button
    _buttonDelete1.initialize("assets/button.png");
    _buttonDelete1.setPosition(600, 200);
    _buttonDelete1.setClick(true, "assets/button-hover.png", [&](){
        deleteSave(1);
    });
    _buttonDelete1.setHover(true, "assets/button-hover.png");
    _buttonDelete1.setText(true, "assets/atwriter.ttf", "Delete", 48, sf::Color::White, 0, -12);
    _buttonDelete1.setSoundClick(true, "assets/button-click.ogg");
    _buttonDelete1.setSoundHover(true, "assets/button-hover.ogg");
    // Delete 2 button
    _buttonDelete2.initialize("assets/button.png");
    _buttonDelete2.setPosition(600, 350);
    _buttonDelete2.setClick(true, "assets/button-hover.png", [&](){
        deleteSave(2);
    });
    _buttonDelete2.setHover(true, "assets/button-hover.png");
    _buttonDelete2.setText(true, "assets/atwriter.ttf", "Delete", 48, sf::Color::White, 0, -12);
    _buttonDelete2.setSoundClick(true, "assets/button-click.ogg");
    _buttonDelete2.setSoundHover(true, "assets/button-hover.ogg");
    // Delete 3 button
    _buttonDelete3.initialize("assets/button.png");
    _buttonDelete3.setPosition(600, 500);
    _buttonDelete3.setClick(true, "assets/button-hover.png", [&](){
        deleteSave(3);
    });
    _buttonDelete3.setHover(true, "assets/button-hover.png");
    _buttonDelete3.setText(true, "assets/atwriter.ttf", "Delete", 48, sf::Color::White, 0, -12);
    _buttonDelete3.setSoundClick(true, "assets/button-click.ogg");
    _buttonDelete3.setSoundHover(true, "assets/button-hover.ogg");
    // Back button
    _buttonPlayBack.initialize("assets/button.png");
    _buttonPlayBack.setPosition(50, 650);
    _buttonPlayBack.setClick(true, "assets/button-hover.png", [&](){
        _state = MainMenuSceneState::Start;
    });
    _buttonPlayBack.setHover(true, "assets/button-hover.png");
    _buttonPlayBack.setText(true, "assets/atwriter.ttf", "Back", 48, sf::Color::White, 0, -12);
    _buttonPlayBack.setSoundClick(true, "assets/button-click.ogg");
    _buttonPlayBack.setSoundHover(true, "assets/button-hover.ogg");

    /*
    ** Initialize NewGame
    */

   // Easy button
   _buttonNewGameEasy.initialize("assets/button.png");
    _buttonNewGameEasy.setPosition(50, 200);
    _buttonNewGameEasy.setClick(true, "assets/button-hover.png", [&](){
        createNewGame(0);
    });
    _buttonNewGameEasy.setHover(true, "assets/button-hover.png");
    _buttonNewGameEasy.setText(true, "assets/atwriter.ttf", "Easy", 48, sf::Color::White, 0, -12);
    _buttonNewGameEasy.setSoundClick(true, "assets/button-click.ogg");
    _buttonNewGameEasy.setSoundHover(true, "assets/button-hover.ogg");
    // Normal button
    _buttonNewGameNormal.initialize("assets/button.png");
    _buttonNewGameNormal.setPosition(50, 350);
    _buttonNewGameNormal.setClick(true, "assets/button-hover.png", [&](){
        createNewGame(1);
    });
    _buttonNewGameNormal.setHover(true, "assets/button-hover.png");
    _buttonNewGameNormal.setText(true, "assets/atwriter.ttf", "Medium", 48, sf::Color::White, 0, -12);
    _buttonNewGameNormal.setSoundClick(true, "assets/button-click.ogg");
    _buttonNewGameNormal.setSoundHover(true, "assets/button-hover.ogg");
    // Hard button
    _buttonNewGameHard.initialize("assets/button.png");
    _buttonNewGameHard.setPosition(50, 500);
    _buttonNewGameHard.setClick(true, "assets/button-hover.png", [&](){
        createNewGame(2);
    });
    _buttonNewGameHard.setHover(true, "assets/button-hover.png");
    _buttonNewGameHard.setText(true, "assets/atwriter.ttf", "Hard", 48, sf::Color::White, 0, -12);
    _buttonNewGameHard.setSoundClick(true, "assets/button-click.ogg");
    _buttonNewGameHard.setSoundHover(true, "assets/button-hover.ogg");
    // Insane button
    _buttonNewGameInsane.initialize("assets/button.png");
    _buttonNewGameInsane.setPosition(50, 650);
    _buttonNewGameInsane.setClick(true, "assets/button-hover.png", [&](){
        createNewGame(3);
    });
    _buttonNewGameInsane.setHover(true, "assets/button-hover.png");
    _buttonNewGameInsane.setText(true, "assets/atwriter.ttf", "Insane", 48, sf::Color::White, 0, -12);
    _buttonNewGameInsane.setSoundClick(true, "assets/button-click.ogg");
    _buttonNewGameInsane.setSoundHover(true, "assets/button-hover.ogg");
    // Back button
    _buttonNewGameBack.initialize("assets/button.png");
    _buttonNewGameBack.setPosition(600, 650);
    _buttonNewGameBack.setClick(true, "assets/button-hover.png", [&](){
        _state = MainMenuSceneState::Play;
    });
    _buttonNewGameBack.setHover(true, "assets/button-hover.png");
    _buttonNewGameBack.setText(true, "assets/atwriter.ttf", "Back", 48, sf::Color::White, 0, -12);
    _buttonNewGameBack.setSoundClick(true, "assets/button-click.ogg");
    _buttonNewGameBack.setSoundHover(true, "assets/button-hover.ogg");

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
    if (_state == MainMenuSceneState::Play) {
        _buttonSave1.click(event);
        _buttonSave1.hover(event);
        _buttonSave2.click(event);
        _buttonSave2.hover(event);
        _buttonSave3.click(event);
        _buttonSave3.hover(event);
        _buttonDelete1.click(event);
        _buttonDelete1.hover(event);
        _buttonDelete2.click(event);
        _buttonDelete2.hover(event);
        _buttonDelete3.click(event);
        _buttonDelete3.hover(event);
        _buttonPlayBack.click(event);
        _buttonPlayBack.hover(event);
    }
    if (_state == MainMenuSceneState::NewGame) {
        _buttonNewGameEasy.click(event);
        _buttonNewGameEasy.hover(event);
        _buttonNewGameNormal.click(event);
        _buttonNewGameNormal.hover(event);
        _buttonNewGameHard.click(event);
        _buttonNewGameHard.hover(event);
        _buttonNewGameInsane.click(event);
        _buttonNewGameInsane.hover(event);
        _buttonNewGameBack.click(event);
        _buttonNewGameBack.hover(event);
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
    if (_state == MainMenuSceneState::Play) {
        window.draw(_buttonSave1.getSprite());
        window.draw(_buttonSave1.getText());
        window.draw(_buttonSave2.getSprite());
        window.draw(_buttonSave2.getText());
        window.draw(_buttonSave3.getSprite());
        window.draw(_buttonSave3.getText());
        if (_save1) {
            window.draw(_buttonDelete1.getSprite());
            window.draw(_buttonDelete1.getText());
        }
        if (_save2) {
            window.draw(_buttonDelete2.getSprite());
            window.draw(_buttonDelete2.getText());
        }
        if (_save3) {
            window.draw(_buttonDelete3.getSprite());
            window.draw(_buttonDelete3.getText());
        }
        window.draw(_buttonPlayBack.getSprite());
        window.draw(_buttonPlayBack.getText());
    }
    if (_state == MainMenuSceneState::NewGame) {
        window.draw(_buttonNewGameEasy.getSprite());
        window.draw(_buttonNewGameEasy.getText());
        window.draw(_buttonNewGameNormal.getSprite());
        window.draw(_buttonNewGameNormal.getText());
        window.draw(_buttonNewGameHard.getSprite());
        window.draw(_buttonNewGameHard.getText());
        window.draw(_buttonNewGameInsane.getSprite());
        window.draw(_buttonNewGameInsane.getText());
        window.draw(_buttonNewGameBack.getSprite());
        window.draw(_buttonNewGameBack.getText());
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
    _buttonSave1.setVolume(soundVolume);
    _buttonSave2.setVolume(soundVolume);
    _buttonSave3.setVolume(soundVolume);
    _buttonDelete1.setVolume(soundVolume);
    _buttonDelete2.setVolume(soundVolume);
    _buttonDelete3.setVolume(soundVolume);
    _buttonPlayBack.setVolume(soundVolume);
    _buttonNewGameEasy.setVolume(soundVolume);
    _buttonNewGameNormal.setVolume(soundVolume);
    _buttonNewGameHard.setVolume(soundVolume);
    _buttonNewGameInsane.setVolume(soundVolume);
    _buttonNewGameBack.setVolume(soundVolume);
}

void fg::MainMenuScene::setMusicVolume()
{
    float musicVolume = 98 / 7 * (7 - _musicLevel);
    _music.setVolume(musicVolume);
}

void fg::MainMenuScene::createNewGame(int difficulty)
{
    fg::FileWriter fileWriter;
    fileWriter.addData("save", _save);
    fileWriter.addData("difficulty", difficulty);
    fileWriter.addData("state", static_cast<int>(GameSceneState::FIGHT));
    fileWriter.addData("stage", 0);
    fileWriter.addData("courage", 0);
    fileWriter.addData("t1", "save/s" + std::to_string(_save) + ".t1.cmgt");
    fileWriter.addData("t2", "save/s" + std::to_string(_save) + ".t2.cmgt");
    fileWriter.save("save/save" + std::to_string(_save) + ".cmgt");

    fg::FileWriter fileWriter2;
    fileWriter2.addData("save1", _save == 1 ? true : _save1);
    fileWriter2.addData("save2", _save == 2 ? true : _save2);
    fileWriter2.addData("save3", _save == 3 ? true : _save3);
    fileWriter2.save("save/save.cmgt");

    _sceneManager.switchToSceneWithArgs<GameScene>("GameScene", _save);
}

void fg::MainMenuScene::deleteSave(int save)
{
    fg::FileWriter fileWriter;
    fileWriter.addData("save1", save == 1 ? false : _save1);
    fileWriter.addData("save2", save == 2 ? false : _save2);
    fileWriter.addData("save3", save == 3 ? false : _save3);

    fileWriter.deleteFile("save/save" + std::to_string(save) + ".cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".t1.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".t2.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".p0.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".p1.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".p2.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".p3.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".e0.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".e1.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".e2.cmgt");
    fileWriter.deleteFile("save/s" + std::to_string(save) + ".e3.cmgt");
    if (save == 1) {
        _save1 = false;
        _buttonSave1.setText(true, "assets/atwriter.ttf", "New Game", 48, sf::Color::White, 0, -12);
    }
    if (save == 2) {
        _save2 = false;
        _buttonSave2.setText(true, "assets/atwriter.ttf", "New Game", 48, sf::Color::White, 0, -12);
    }
    if (save == 3) {
        _save3 = false;
        _buttonSave3.setText(true, "assets/atwriter.ttf", "New Game", 48, sf::Color::White, 0, -12);
    }
    fileWriter.save("save/save.cmgt");
}