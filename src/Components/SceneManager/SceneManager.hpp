/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Scenemanager.hpp
*/

#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <memory>
#include <string>
#include <functional>
#include <SFML/Graphics.hpp>

#include "Scene.hpp"

namespace fg
{
    class Scene;
    class SceneManager
    {
        public:
            SceneManager(sf::RenderWindow &window);
            ~SceneManager() = default;

            void switchToScene(std::shared_ptr<Scene> scene);
            void switchToScene(std::string scene);

            template <typename T>
            void addScene(std::string sceneName) {
                _scenes[sceneName] = [this]() {
                    std::shared_ptr<Scene> scene = std::make_shared<T>(*this);
                    switchToScene(scene);
                };
            }
            
            void eventCurrentScene(sf::Event &event);
            void updateCurrentScene();
            void drawCurrentScene();

            sf::RenderWindow &getWindow();

        private:
            sf::RenderWindow &_window;
            std::shared_ptr<Scene> _currentScene;
            std::unordered_map<std::string, std::function<void()>> _scenes;
    };    
}