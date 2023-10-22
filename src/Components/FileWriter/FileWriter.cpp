/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * FileWriter.cpp
*/

#include "FileWriter.hpp"

fg::FileWriter::FileWriter(std::string filepath)
{
    _filepath = filepath;
}

void fg::FileWriter::setFilepath(std::string filepath)
{
    _filepath = filepath;
}

void fg::FileWriter::printData()
{
    for (const auto &data : _data)
    {
        std::cout << data.first << ":" << data.second << std::endl;
    }
}

void fg::FileWriter::save()
{
    std::ofstream file(_filepath);
    if (!file.is_open())
    {
        std::cout << "Error opening file: " << _filepath << std::endl;
        return;
    }
    for (const auto &data : _data)
    {
        file << data.first << ":" << data.second << std::endl;
    }
    file.close();
}

void fg::FileWriter::save(std::string filepath)
{
    _filepath = filepath;
    save();
}

void fg::FileWriter::addData(std::string dataName, std::string data)
{
    _data[dataName] = data;
}

void fg::FileWriter::addData(std::string dataName, const char *data)
{
    _data[dataName] = data;
}

void fg::FileWriter::addData(std::string dataName, char data)
{
    _data[dataName] = std::to_string(data);
}

void fg::FileWriter::addData(std::string dataName, int data)
{
    _data[dataName] = std::to_string(data);
}

void fg::FileWriter::addData(std::string dataName, float data)
{
    _data[dataName] = std::to_string(data);
}

void fg::FileWriter::addData(std::string dataName, bool data)
{
    _data[dataName] = std::to_string(data);
}   

bool fg::FileWriter::load()
{
    std::ifstream file(_filepath);
    if (!file.is_open()) {
        return false;
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::string dataName = line.substr(0, line.find(":"));
        std::string data = line.substr(line.find(":")+1, line.size());
        _data[dataName] = data;
    }
    file.close();
    return true;
}

bool fg::FileWriter::load(std::string filepath)
{
    _filepath = filepath;
    return load();
}

void fg::FileWriter::deleteFile(bool debug)
{
    if (remove(_filepath.c_str()) != 0)
    {
        if (debug)
            std::cout << RED << "Error deleting file: " << RESET << _filepath << std::endl;
    }
}

void fg::FileWriter::deleteFile(std::string filepath)
{
    _filepath = filepath;
    deleteFile();
}