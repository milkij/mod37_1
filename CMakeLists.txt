cmake_minimum_required(VERSION 3.23)
project(mod37)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/usr/local")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(mod37 src/main.cpp src/calc.cpp include/calc.h src/calc.ui)
target_link_libraries(mod37
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

