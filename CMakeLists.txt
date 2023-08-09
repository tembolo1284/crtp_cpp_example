cmake_minimum_required(VERSION 3.0.0)
project(CRTP_Example_CPP VERSION 1.0.0)
project(CRTP_Example_CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(NAME "Paul Lopez")
message("Project has been created by ${NAME}.")

add_library(libraries
            src/SimpleInterestCalculator.cpp
            src/CompoundInterestCalculator.cpp)

add_executable(main
                src/main.cpp)

target_include_directories(libraries PUBLIC include)
target_link_libraries(main PUBLIC libraries)