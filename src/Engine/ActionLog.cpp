/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * ActionLog.cpp
*/

#include "ActionLog.hpp"

fg::ActionLog::ActionLog()
{
    initialize();
}

void fg::ActionLog::initialize()
{
    _background.initialize(sf::Color::Red, sf::Color::Black);
    _background.setPosition(860, 630);
    _background.setSize(320, 170);
    _log.reserve(5);
}

void fg::ActionLog::addLog(std::string log)
{
    if (_log.size() == 5) {
        _log.erase(_log.begin());
        for (auto &log : _log)
            log.getText().move(0, -20);
    }
    _log.emplace_back();
    _log.back().initialize("assets/arial.ttf", log, 20, sf::Color::White, _background.getPosition().x + 10, _background.getPosition().y + 10 + (_log.size() - 1) * 20);
}

void fg::ActionLog::draw(sf::RenderWindow &window)
{
    _background.draw(window);
    for (auto &log : _log)
        log.draw(window);
}