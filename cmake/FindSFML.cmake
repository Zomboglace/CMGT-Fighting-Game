# Usage: FIND_PACKAGE(SFML REQUIRED)
# [...]
# TARGET_LINK_LIBRARIES(target_name sfml-graphics sfml-window sfml-system)

CMAKE_MINIMUM_REQUIRED(VERSION 3.11)

if (NOT SFML_FOUND)
    INCLUDE(FetchContent)
    FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.5 # Replace with the desired SFML version
    )
    FetchContent_GetProperties(SFML)
    
    if (NOT SFML_POPULATED)
        SET(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(SFML)
        
        ADD_SUBDIRECTORY(${SFML_SOURCE_DIR} ${SFML_BINARY_DIR})
        SET(SFML_FOUND TRUE)
    endif()
endif()