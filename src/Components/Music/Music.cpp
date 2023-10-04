/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Music.cpp
*/

#include "Music.hpp"

fg::Music::Music()
    : _volume(100),
    _currentVolume(0),
    _time(0),
    _timeToMaxVolume(0)
{

}

void fg::Music::initialize(std::string filepath, int volume, float timeToMaxVolume)
{
    if (!_music.openFromFile(filepath))
        std::cout << "Error loading music" << std::endl;
    _timeToMaxVolume = timeToMaxVolume;
    _music.setVolume(_currentVolume);
}

void fg::Music::update()
{
    if (_currentVolume != _volume) {
        _currentVolume = _volume * (_clock.getElapsedTime().asSeconds() / _timeToMaxVolume);
        if (_clock.getElapsedTime().asSeconds() > _timeToMaxVolume)
            _currentVolume = _volume;
    }
    if (_loop && _music.getStatus() == sf::Music::Stopped) {
        _music.play();
        _currentVolume = 0;
        _clock.restart();
    }
    _music.setVolume(_currentVolume);
}

void fg::Music::play()
{
    _music.play();
}

void fg::Music::pause()
{
    _music.pause();
}

void fg::Music::stop()
{
    _music.stop();
}

void fg::Music::setLoop(bool loop)
{
    _loop = loop;
}

void fg::Music::setVolume(float volume)
{
    _volume = volume;
    _music.setVolume(_volume);
}

void fg::Music::setCurrentVolume(float volume)
{
    _currentVolume = volume;
    _music.setVolume(_currentVolume);
}

void fg::Music::setTimeToMaxVolume(float time)
{
    _timeToMaxVolume = time;
}

float fg::Music::getVolume() const
{
    return _volume;
}