/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Window.cpp
*/

#include "RenderWindow.hpp"

fg::RenderWindow::RenderWindow(std::string name, unsigned int width, unsigned int height, unsigned int bpp)
{
    _window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width, height, bpp), name, sf::Style::Close);
    
    _window.get()->setVerticalSyncEnabled(true); // VSync which limits the framerate to the refresh rate of the monitor
    _window.get()->setFramerateLimit(60); // Limit the framerate to a maximum fixed frequency
    _window.get()->setMouseCursorVisible(true); // Set the cursor visible or invisible
    _window.get()->setKeyRepeatEnabled(false); // Enable or disable automatic key-repeat which means that the window will generate multiple KeyPressed events while keeping the key pressed
}

fg::RenderWindow::~RenderWindow()
{
    if (isOpen())
        close();
}

bool fg::RenderWindow::isOpen() const
{
    return _window.get()->isOpen();
}

bool fg::RenderWindow::pollEvent(sf::Event &event)
{
    return _window.get()->pollEvent(event);
}

void fg::RenderWindow::close()
{
    _window.get()->close();
}

void fg::RenderWindow::clear()
{
    _window.get()->clear();
}

void fg::RenderWindow::draw(const sf::Drawable& drawable, const sf::RenderStates states)
{
    _window.get()->draw(drawable, states);
}

void fg::RenderWindow::display()
{
    _window.get()->display();
}