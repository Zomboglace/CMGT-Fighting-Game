/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Hud.cpp
*/

#include "Hud.hpp"

fg::Hud::Hud()
    : 
    _entitySelected(false)
{
    initialize();
}

void fg::Hud::initialize()
{
    _background.initialize(sf::Color::Red, sf::Color::Black);
    _background.setPosition(0, 630);
    _background.setSize(860, 170);

    _attack1.initialize("assets/button-attack.png");
    _attack1.setHover(true, "assets/button-attack-hover.png");
    _attack1.setPosition(_background.getPosition().x + 20, _background.getPosition().y + 20);

    _attack2.initialize("assets/button-attack.png");
    _attack2.setHover(true, "assets/button-attack-hover.png");
    _attack2.setPosition(_background.getPosition().x + 20, _background.getPosition().y + 80);

    _attack3.initialize("assets/button-attack.png");
    _attack3.setHover(true, "assets/button-attack-hover.png");
    _attack3.setPosition(_background.getPosition().x + 300, _background.getPosition().y + 20);

    _attack4.initialize("assets/button-attack.png");
    _attack4.setHover(true, "assets/button-attack-hover.png");
    _attack4.setPosition(_background.getPosition().x + 300, _background.getPosition().y + 80);

    _switchPosition.initialize("assets/button-attack.png");
    _switchPosition.setHover(true, "assets/button-attack-hover.png");
    _switchPosition.setPosition(_background.getPosition().x + 580, _background.getPosition().y + 20);

    _skip.initialize("assets/button-attack.png");
    _skip.setHover(true, "assets/button-attack-hover.png");
    _skip.setPosition(_background.getPosition().x + 580, _background.getPosition().y + 80);
}

void fg::Hud::event(sf::RenderWindow &window, sf::Event &event)
{
    // if (_state == GameSceneState::FIGHT)
    // {
        _attack1.event(window, event);
        _attack2.event(window, event);
        _attack3.event(window, event);
        _attack4.event(window, event);
        _switchPosition.event(window, event);
        _skip.event(window, event);
    // }
}

void fg::Hud::update(sf::RenderWindow &window)
{
    // if (_state == GameSceneState::FIGHT)
    // {

    // }
}

void fg::Hud::draw(sf::RenderWindow &window)
{
    // if (_state == GameSceneState::FIGHT)
    // {
        _background.draw(window);
        window.draw(_attack1.getSprite());
        window.draw(_attack1.getText());
        window.draw(_attack2.getSprite());
        window.draw(_attack2.getText());
        window.draw(_attack3.getSprite());
        window.draw(_attack3.getText());
        window.draw(_attack4.getSprite());
        window.draw(_attack4.getText());
        window.draw(_switchPosition.getSprite());
        window.draw(_switchPosition.getText());
        window.draw(_skip.getSprite());
        window.draw(_skip.getText());
    // }
}

void fg::Hud::setHudForEntity(Entity &entity)
{
    _entitySelected = true;

    _attack1.setText(true, "assets/arial.ttf", entity.getAbility(1).getName(), 20, sf::Color::White);
    _attack2.setText(true, "assets/arial.ttf", entity.getAbility(2).getName(), 20, sf::Color::White);
    _attack3.setText(true, "assets/arial.ttf", entity.getAbility(3).getName(), 20, sf::Color::White);
    _attack4.setText(true, "assets/arial.ttf", entity.getAbility(4).getName(), 20, sf::Color::White);
    _switchPosition.setText(true, "assets/arial.ttf", "Switch Position", 20, sf::Color::White);
    _skip.setText(true, "assets/arial.ttf", "Skip turn", 20, sf::Color::White);
}

// void fg::Hud::changeScene(GameSceneState state)
// {
//     _state = state;
// }