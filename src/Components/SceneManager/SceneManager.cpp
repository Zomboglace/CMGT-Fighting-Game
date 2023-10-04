/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Scenemanager.cpp
*/

#include "SceneManager.hpp"

fg::SceneManager::SceneManager(sf::RenderWindow &window) : _window(window)
{}

void fg::SceneManager::switchToScene(std::shared_ptr<Scene> scene)
{
    _currentScene = scene;
}

void fg::SceneManager::switchToScene(std::string scene)
{
    if (_scenes.find(scene) == _scenes.end())
        return;
    _scenes[scene]();
}

void fg::SceneManager::eventCurrentScene(sf::Event &event)
{
    if (!_currentScene)
        return;
    _currentScene->event(_window, event);
}

void fg::SceneManager::updateCurrentScene()
{
    if (!_currentScene)
        return;
    _currentScene->update(_window);
}

void fg::SceneManager::drawCurrentScene()
{
    if (!_currentScene)
        return;
    _window.clear();
    _currentScene->draw(_window);
    _window.display();
}

sf::RenderWindow &fg::SceneManager::getWindow()
{
    return _window;
}