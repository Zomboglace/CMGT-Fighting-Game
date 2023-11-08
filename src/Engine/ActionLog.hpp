/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * ActionLog.hpp
*/

#pragma once

#include <iostream>
#include <vector>
#include "Rectangle.hpp"
#include "Text.hpp"

namespace fg
{
    class ActionLog
    {
        public:
            ActionLog();
            ~ActionLog() = default;

            void initialize();

            void addLog(std::string log);
            void draw(sf::RenderWindow &window);

        private:
            fg::Rectangle _background;
            std::vector<fg::Text> _log;
    };
}