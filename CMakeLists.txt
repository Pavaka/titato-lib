cmake_minimum_required (VERSION 2.8.11)
project (TitatoLib)
include_directories(
    "${PROJECT_SOURCE_DIR}/src"
    "${PROJECT_SOURCE_DIR}/include"
)
add_library(Titato SHARED "src/TitatoGameImpl.cpp")