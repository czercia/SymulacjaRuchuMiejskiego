cmake_minimum_required(VERSION 3.6)
project(ProjektSemestralny)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Symulacja.cpp Symulacja.h Pojazd.cpp Pojazd.h KolejkaZdarzen.cpp KolejkaZdarzen.h Linia.cpp Linia.h Przystanek.cpp Przystanek.h Zdarzenie.cpp Zdarzenie.h Obiekt.cpp Obiekt.h Compare.cpp Compare.h Miejsce.cpp Miejsce.h Teatr.cpp Teatr.h)
add_executable(ProjektSemestralny ${SOURCE_FILES})