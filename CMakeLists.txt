cmake_minimum_required(VERSION 3.17)

# En cas d'ajout de ressources placées plus haut dans la hiérarchie du projet que le CMakeLists.txt
#ADD_LIBRARY(library1  ${library1_sources})
#TARGET_LINK_LIBRARIES(library1)
#ADD_EXECUTABLE(library1 ${library1_sources})

# For each subproject

# Chapitre sur les fonctions
project(Chapters)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} Main.cpp Chapters/*.cpp)
ADD_EXECUTABLE(Exercises ${SOURCES} Utils/CharUtils.h Utils/CharUtils.cpp)

# End Chapitre sur les fonctions