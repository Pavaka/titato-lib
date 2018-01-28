cmake_minimum_required (VERSION 2.8.11)
project(TitatoGameCore)
include_directories(
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/include"
)
SET(SOURCE
    "src/TitatoGameImpl.cpp"
)
set(HEADERS
    "include/TitatoGame.h"
    "src/TitatoGameImpl.h"
)
add_library(TitatoGameCore SHARED ${SOURCE} ${HEADERS})