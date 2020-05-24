cmake_minimum_required(VERSION 3.16)

project(qt5-cmake-starter)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(qt5-cmake-starter
	src/main.cpp
)

target_link_libraries(qt5-cmake-starter PRIVATE Qt5::Core)
target_link_libraries(qt5-cmake-starter PRIVATE Qt5::Widgets)
