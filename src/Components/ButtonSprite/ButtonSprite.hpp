/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * ButtonSprite.hpp
*/

#pragma once

#include <iostream>
#include <functional>
#include <SFML/Graphics.hpp>
#include "Text.hpp"
#include "Sound.hpp"

namespace fg
{
    class ButtonSprite 
    {
        public:
            ButtonSprite();
            ~ButtonSprite() = default;

            void initialize(std::string filepath);
            void setClick(bool click, std::string filepath = "", std::function<void()> lambda = nullptr);
            void setHover(bool hover, std::string filepath = "", std::function<void()> lambda = nullptr);
            void setText(bool text, std::string filepath = "", std::string textString = "", int size = 0, sf::Color color = sf::Color::White, float x = 0, float y = 0);
            void setSoundClick(bool sound, std::string filepath = "", float volume = 100.0f);
            void setSoundHover(bool sound, std::string filepath = "", float volume = 100.0f);

            void click(sf::Event &event);
            void hover(sf::Event &event);

            void setPosition(float x, float y);
            void scale(float x, float y);
            void setVolume(float volume);

            sf::Texture &getTexture();
            sf::Sprite &getSprite();
            sf::Text &getText();
            sf::Sound &getSoundClick();
            sf::Sound &getSoundHover();

        private:
            sf::Texture _buttonTexture;
            sf::Texture _buttonTextureHover;
            sf::Texture _buttonTextureClick;
            sf::Sprite _buttonSprite;
            bool _hover;
            bool _click;
            bool _clickSound;
            bool _hoverSound;
            bool _hovering;
            bool _holding;
            bool _holdingThis;
            std::function<void()> _clickLambda;
            std::function<void()> _hoverLambda;
            fg::Text _text;
            fg::Sound _soundClick;
            fg::Sound _soundHover;
            
    };
};