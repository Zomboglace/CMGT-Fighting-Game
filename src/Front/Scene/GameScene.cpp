/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * GameScene.cpp
*/

#include "GameScene.hpp"

fg::GameScene::GameScene(SceneManager &sceneManager) 
    : Scene(sceneManager),
    _save(1)
{
    initialize();
}

fg::GameScene::GameScene(SceneManager &sceneManager, int save) 
    : Scene(sceneManager),
    _save(save)
{
    initialize();
}

void fg::GameScene::initialize()
{
    int width = _sceneManager.getWindow().getSize().x;
    int height = _sceneManager.getWindow().getSize().y;

    // Team
    _playerTeam.setIsPlayerTeam(true);
    _enemyTeam.setIsPlayerTeam(false);
    load();

    // Player team
    for (auto &entity : _playerTeam.getEntities()) {
        entity.first.getStateSprite().setPosition(width / 2 - 200 - entity.second * 140, 500);
    }
    // Enemy team
    for (auto &entity : _enemyTeam.getEntities()) {
        entity.first.getStateSprite().setPosition(width - 140 * 4 + entity.second * 140, 500);
    }

    // Background
    _background.initialize("assets/background/fight_background.png", "fight");
    _background.addState("assets/background/camp_background.png", "camp");
    _background.setOrigin(fg::Origin::CENTER);
    _background.setPosition(width / 2, height / 2 - 200);


    // Entity first turn
    _hud.changeScene(_state);
    if (_state == fg::GameSceneState::FIGHT) {
        calculateInitiative();
        nextTurn();
    }
    if (_state == fg::GameSceneState::CAMP) {
        _background.changeState("camp");
        for (auto &entity : _playerTeam.getEntities())
            entity.first.getStateSprite().changeState("camp");
    }
}

void fg::GameScene::event(sf::RenderWindow &window, sf::Event &event)
{
    _playerTeam.event(window, event);
    if (_state == fg::GameSceneState::FIGHT)
        _enemyTeam.event(window, event);
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Escape) {
            _sceneManager.switchToScene("MainMenuScene");
        }
        if (event.key.code == sf::Keyboard::Space) {
            _actionLog.addLog("Test log Space");
            _playerTeam.swapEntityForward(1);
            _playerTeam.swapEntityForward(2);
            _playerTeam.swapEntityForward(3);
        }
        if (event.key.code == sf::Keyboard::A) {
            _actionLog.addLog("Test log A");
            _playerTeam.swapEntityBackward(2);
            _playerTeam.swapEntityBackward(1);
            _playerTeam.swapEntityBackward(0);
        }
        if (event.key.code == sf::Keyboard::Z) {
            _actionLog.addLog("Test log Z");
            nextTurn();
        }
        if (event.key.code == sf::Keyboard::Numpad1) {
            _actionLog.addLog("Test log 1");
            _background.changeState("fight");
            _state = fg::GameSceneState::FIGHT;
            for (auto &entity : _playerTeam.getEntities())
                entity.first.getStateSprite().changeState("idle");
        }
        if (event.key.code == sf::Keyboard::Numpad2) {
            _actionLog.addLog("Test log 2");
            _background.changeState("fight");
            _state = fg::GameSceneState::FIGHT;
            for (auto &entity : _playerTeam.getEntities())
                entity.first.getStateSprite().changeState("combat");
        }
        if (event.key.code == sf::Keyboard::Numpad3) {
            _actionLog.addLog("Test log 3");
            _background.changeState("fight");
            _state = fg::GameSceneState::FIGHT;
            for (auto &entity : _playerTeam.getEntities())
                entity.first.getStateSprite().changeState("defend");
        }
        if (event.key.code == sf::Keyboard::Numpad4) {
            _actionLog.addLog("Test log 4");
            _background.changeState("camp");
            _state = fg::GameSceneState::CAMP;
            for (auto &entity : _playerTeam.getEntities())
                entity.first.getStateSprite().changeState("camp");
        }
    }
    _hud.event(window, event);
}

void fg::GameScene::update(sf::RenderWindow &window)
{
    for (auto &entity : _playerTeam.getEntities()) {
        entity.first.update();
    }
    for (auto &entity : _enemyTeam.getEntities()) {
        entity.first.update();
    }
}

void fg::GameScene::draw(sf::RenderWindow &window)
{
    window.draw(_background.getSprite());
    _playerTeam.draw(window);
    if (_state == fg::GameSceneState::FIGHT) {
        _enemyTeam.draw(window);
    }
    _hud.draw(window);
    _actionLog.draw(window);
}

void fg::GameScene::save()
{
    fg::FileWriter file("save/save" + std::to_string(_save) + ".cmgt");
    file.addData("save", _save);
    file.addData("difficulty", _difficulty);
    file.addData("state", static_cast<int>(_state));
    file.addData("stage", _stage);
    file.addData("courage", _courage);
    file.addData("t1", _playerTeam.getFilepath());
    if (_state == fg::GameSceneState::FIGHT)
        file.addData("t2", _enemyTeam.getFilepath());
    _playerTeam.save();
    _enemyTeam.save();

    file.save();
}

void fg::GameScene::load()
{
    try {
        std::cout << YELLOW << "Loading save " << std::to_string(_save) << "..." << RESET << std::endl;
        fg::FileWriter file("save/save" + std::to_string(_save) + ".cmgt");
        if (file.load()) {
            _save = file.getData<int>("save");
            _difficulty = file.getData<int>("difficulty");
            _state = static_cast<fg::GameSceneState>(file.getData<int>("state"));
            _stage = file.getData<int>("stage");
            _courage = file.getData<int>("courage");
            _playerTeam.load(file.getData<std::string>("t1"));
            if (_state == fg::GameSceneState::FIGHT)
                _enemyTeam.load(file.getData<std::string>("t2"));
            std::cout << GREEN << "Save " << std::to_string(_save) << " loaded!" << RESET << std::endl;
        } else
            throw std::invalid_argument("Save " + std::to_string(_save) + " not found!");
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
        throw std::invalid_argument(e.what());
    }
}

void fg::GameScene::calculateInitiative()
{
    _initiativeOrder.clear();
    for (auto &entity : _playerTeam.getEntities()) {
        _initiativeOrder.push_back(std::make_pair(entity.first.getInitiative(), entity.second));
    }
    for (auto &entity : _enemyTeam.getEntities()) {
        _initiativeOrder.push_back(std::make_pair(entity.first.getInitiative(), entity.second + 4));
    }
    std::sort(_initiativeOrder.begin(), _initiativeOrder.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.first > b.first;
    });
}

void fg::GameScene::nextTurn()
{
    if (_initiativeOrder.size() == 0)
        calculateInitiative();
    if (_initiativeOrder.size() == 0)
        return;
    changeSpriteState(_currentEntityTurn, "idle");
    _currentEntityTurn = _initiativeOrder[0].second;
    _initiativeOrder.erase(_initiativeOrder.begin());
    changeSpriteState(_currentEntityTurn, "combat");
    _hud.setHudForEntity(_currentEntityTurn < 4 ? _playerTeam.getEntity(_currentEntityTurn) : _enemyTeam.getEntity(_currentEntityTurn - 4));
}

void fg::GameScene::changeSpriteState(int pos, std::string stateName)
{
    if (pos < 4) {
        _playerTeam.getEntity(pos).getStateSprite().changeState(stateName);
    } else {
        _enemyTeam.getEntity(pos - 4).getStateSprite().changeState(stateName);
    }
}