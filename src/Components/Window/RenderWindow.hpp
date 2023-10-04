/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Window.hpp
*/

#pragma once

#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>

namespace fg
{
    class RenderWindow
    {
        public:
            RenderWindow(std::string name, unsigned int width, unsigned int height, unsigned int bpp = 32);
            ~RenderWindow();

            bool isOpen() const;
            bool pollEvent(sf::Event &event);
            void close();
            void clear();
            void draw(const sf::Drawable& drawable, const sf::RenderStates states = sf::RenderStates::Default);
            void display();

            sf::RenderWindow& getRenderWindow() const { return *_window; }

        private:
            std::unique_ptr<sf::RenderWindow> _window;

    };
}