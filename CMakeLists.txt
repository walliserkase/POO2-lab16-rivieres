cmake_minimum_required(VERSION 3.10)
project(Lab_16_Riviere)

set(CMAKE_CXX_STANDARD 11)

add_executable(Lab_16_Riviere main.cpp src/Container.cpp header/Container.h src/Person.cpp header/Person.h src/Bank.cpp header/Bank.h src/Boat.cpp header/Boat.h src/Controller.cpp header/Controller.h src/Menu.cpp header/Menu.h)