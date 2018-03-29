cmake_minimum_required (VERSION 2.8.11)
project(TitatoGameCore)
include_directories(
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/include"
)
SET(SOURCE
    "src/TitatoGameImpl.cpp"
    "src/TicTacToeBoard.cpp"
)
set(HEADERS
    "include/TitatoGame.h"
    "include/BoardCommon.h"
    "src/TitatoGameImpl.h"
    "src/TicTacToeBoard.h"
)
add_library(TitatoGameCore SHARED ${SOURCE} ${HEADERS})