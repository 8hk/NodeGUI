cmake_minimum_required(VERSION 3.15)
project(NodeGUI)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_PREFIX_PATH "D:/Qt/5.12.5/mingw73_64/")
set(Qt5_DIR "D:/Qt/5.12.5/mingw73_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
add_executable(NodeGUI
        main.cpp
        MainWindow.cpp MainWindow.h MainWindow.ui
        Button/CustomButton.cpp Button/CustomButton.h Grid/Grid.cpp Grid/Grid.h)
target_link_libraries(NodeGUI Qt5::Core Qt5::Widgets)