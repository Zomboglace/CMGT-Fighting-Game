/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Music.hpp
*/

#pragma once

#include <iostream>
#include <SFML/Audio.hpp>

namespace fg
{
    class Music
    {
        public:
            Music();
            ~Music() = default;

            void initialize(std::string filepath, int volume = 100, float timeToMaxVolume = 0);
            void update();
            void play();
            void pause();
            void stop();
            void setLoop(bool loop);
            void setVolume(float volume);
            void setCurrentVolume(float volume);
            void setTimeToMaxVolume(float time);

            float getVolume() const;

        private:
            sf::Music _music;
            sf::Clock _clock;
            float _time;
            float _timeToMaxVolume;
            float _volume;
            float _currentVolume;
            bool _loop;
    };
}