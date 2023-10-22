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
                _scenesTypes[sceneName] = &typeid(T);
                _scenes[sceneName] = [this]() {
                    std::shared_ptr<Scene> scene = std::make_shared<T>(*this);
                    switchToScene(scene);
                };
            }

            template <typename... Args>
            void switchToSceneWithArgs(std::string sceneName, Args&&... args) {
                if (_scenes.find(sceneName) == _scenes.end()) {
                    std::cerr << "Scene " << sceneName << " not found" << std::endl;
                    return;
                }
                const std::type_info *type = _scenesTypes[sceneName];
                switchToScene(sceneName, std::forward<Args>(args)...);
            }

            template <typename T, typename... Args>
            void switchToScene(std::string sceneName, Args&&... args) {
                if (_scenes.find(sceneName) == _scenes.end()) {
                    std::cout << "Scene " << sceneName << " not found" << std::endl;
                    return;
                }
                const std::type_info *type = _scenesTypes[sceneName];
                if (*type != typeid(T)) {
                    std::cout << "Scene " << sceneName << " is not of type " << typeid(T).name() << std::endl;
                    return;
                }
                if (*type != typeid(T)) {
                    std::cout << "Scene " << sceneName << " is not of type " << typeid(T).name() << std::endl;
                    return;
                }
                std::shared_ptr<Scene> scene = std::make_shared<T>(*this, std::forward<Args>(args)...);
                switchToScene(scene);
            }
            
            void eventCurrentScene(sf::Event &event);
            void updateCurrentScene();
            void drawCurrentScene();

            sf::RenderWindow &getWindow();

        private:
            sf::RenderWindow &_window;
            std::shared_ptr<Scene> _currentScene;
            std::map<std::string, const std::type_info *> _scenesTypes;
            std::unordered_map<std::string, std::function<void()>> _scenes;
    };    
}