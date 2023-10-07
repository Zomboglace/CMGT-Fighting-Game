/**
 * Saxion Hogeschool Project
 * Fighting_game
 * File description
 * FileWriter.hpp
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>

namespace fg
{
    class FileWriter
    {
        public:
            FileWriter() = default;
            FileWriter(std::string filepath);
            ~FileWriter() = default;

            void printData();

            void setFilepath(std::string filepath);

            void save();
            void save(std::string filepath);

            void addData(std::string dataName, std::string data);
            void addData(std::string dataName, const char *data);
            void addData(std::string dataName, char data);
            void addData(std::string dataName, int data);
            void addData(std::string dataName, float data);
            void addData(std::string dataName, bool data);

            bool load();
            bool load(std::string filepath);

            template <typename T>
            T getData(std::string dataName)
            {
                if (_data.find(dataName) == _data.end()) {
                    throw std::invalid_argument("Data not found: " + dataName);
                }
                std::istringstream ss(_data[dataName]);
                T data;

                if (!(ss >> data)) {
                    throw std::invalid_argument("Invalid input: " + dataName);
                }
                return data;
            }

        private:
            std::unordered_map<std::string, std::string> _data;
            std::string _filepath;
    };
}