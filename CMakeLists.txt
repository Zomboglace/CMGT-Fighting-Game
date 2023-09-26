cmake_minimum_required(VERSION 3.0)
project(fighting_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(fighting_game
src/main.cpp
)

if (UNIX)
	find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)
	target_link_libraries(fighting_game sfml-graphics sfml-window sfml-system)
endif (UNIX)
