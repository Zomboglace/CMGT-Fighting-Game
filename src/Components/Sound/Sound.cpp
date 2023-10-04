/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * Sound.cpp
*/

#include "Sound.hpp"

fg::Sound::Sound()
    : _volume(100)
{

}

void fg::Sound::initialize(std::string filepath, int volume)
{
    if (!_buffer.loadFromFile(filepath))
        std::cout << "Error loading sound" << std::endl;
    _sound.setBuffer(_buffer);
    _sound.setVolume(volume);
}

void fg::Sound::play()
{
    _sound.play();
}

void fg::Sound::play(int volume)
{
    _sound.setVolume(volume);
    _sound.play();
}

void fg::Sound::setVolume(float volume)
{
    _sound.setVolume(volume);
}

float fg::Sound::getVolume() const
{
    return _volume;
}

sf::Sound &fg::Sound::getSound()
{
    return _sound;
}