cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Indica che i file .h stanno in "include"
include_directories(include)

# Aggiungi i file sorgente da "src"
file(GLOB SOURCES "src/*.cpp")

# Crea l'eseguibile con i sorgenti trovati
add_executable(MyApp ${SOURCES})

