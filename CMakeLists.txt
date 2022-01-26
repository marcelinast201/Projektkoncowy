cmake_minimum_required(VERSION 3.20)
project(projektkoncowy)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(projektkoncowy src/main.cpp src/Villager.cpp src/Monster.cpp src/Boss.cpp src/FightSimulator.cpp src/ReadData.cpp )
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Monsters.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Villagers.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)