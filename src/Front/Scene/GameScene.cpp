/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * GameScene.cpp
*/

#include "GameScene.hpp"

fg::GameScene::GameScene(SceneManager &sceneManager) 
    : Scene(sceneManager)
{
    int width = _sceneManager.getWindow().getSize().x;
    int height = _sceneManager.getWindow().getSize().y;

    // Initialize button
    _buttonStart.initialize("assets/button.png");
    _buttonStart.setPosition(50, 200);
    _buttonStart.setClick(true, "assets/button-hover.png", [&](){
        _sceneManager.switchToScene("MainMenuScene");
    });
    _buttonStart.setHover(true, "assets/button-hover.png");
    _buttonStart.setText(true, "assets/atwriter.ttf", "Start", 24, sf::Color::White, 0, 0);

}

void fg::GameScene::event(sf::RenderWindow &window, sf::Event &event)
{
    _buttonStart.click(event);
    _buttonStart.hover(event);
}

void fg::GameScene::update(sf::RenderWindow &window)
{
    
}

void fg::GameScene::draw(sf::RenderWindow &window)
{
    window.draw(_buttonStart.getSprite());
}
