/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Sound.hpp
*/

#pragma once

#include <iostream>
#include <SFML/Audio.hpp>

namespace fg
{
    class Sound
    {
        public:
            Sound();
            ~Sound() = default;

            void initialize(std::string filepath, int volume = 100);
            void play();
            void play(int volume);
            void setVolume(float volume);

            float getVolume() const;
            sf::Sound &getSound();
            
        private:
            sf::Sound _sound; // Sound is needed to play the sound
            sf::SoundBuffer _buffer; // Buffer is needed to load the sound
            float _volume;
    };
};