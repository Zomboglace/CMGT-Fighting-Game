cmake_minimum_required(VERSION 3.0)

project(fighting_game)

# Set the C++ standard (change to your desired version)
set(CMAKE_CXX_STANDARD 14)

# set(CMAKE_PREFIX_PATH "./SFML" "./flac-1.4.3" ${CMAKE_PREFIX_PATH})

set(SFML_DIR "./SFML/lib/cmake/SFML")
set(FLAC_DIR "./flac-1.4.3")
# set(FLAC_DIR "/usr/local/lib/")
set(Ogg_DIR "./libogg-1.3.5/build")

# If program doesnt work try running "sudo ldconfig" in terminal
set(CMAKE_BUILD_RPATH "./flac-1.4.3/build/src/libFLAC/")

find_package(SFML 2.6.0 COMPONENTS system window graphics audio REQUIRED)
find_package(FLAC REQUIRED)
find_package(Ogg REQUIRED)

set(PROJECT_ROOT_DIR ${CMAKE_SOURCE_DIR}/)
file(GLOB_RECURSE SOURCES ${PROJECT_ROOT_DIR}src/*.cpp)
include_directories(
	${PROJECT_ROOT_DIR}src/
	${PROJECT_ROOT_DIR}src/Components/SceneManager
	${PROJECT_ROOT_DIR}src/Components/Window
	${PROJECT_ROOT_DIR}src/Components/AnimatedSprite
	${PROJECT_ROOT_DIR}src/Components/ButtonSprite
	${PROJECT_ROOT_DIR}src/Components/RectSprite
	${PROJECT_ROOT_DIR}src/Components/Text
	${PROJECT_ROOT_DIR}src/Components/Music
	${PROJECT_ROOT_DIR}src/Components/Sound
	${PROJECT_ROOT_DIR}src/Components/FileWriter
	${PROJECT_ROOT_DIR}src/Components/StateSprite
	${PROJECT_ROOT_DIR}src/Engine
	${PROJECT_ROOT_DIR}src/Front/Game
	${PROJECT_ROOT_DIR}src/Front/Scene/
)

# Add your executable target
add_executable(fighting_game ${SOURCES})

# Link the SFML libraries to your project
target_link_libraries(fighting_game
    sfml-system
    sfml-window
    sfml-graphics
    sfml-audio
	FLAC::FLAC
	Ogg::ogg
)
