cmake_minimum_required(VERSION 3.16)

project(child_food VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Core Gui Qml Quick Sql)

qt_standard_project_setup()

qt_add_executable(appchild_food
    main.cpp
)

qt_add_qml_module(appchild_food
    URI child_food
    VERSION 1.0
    QML_FILES View/Left_panel.qml
    QML_FILES View/Main.qml
    QML_FILES
    QML_FILES
    QML_FILES
    QML_FILES
    SOURCES database.h database.cpp
    SOURCES menu.h menu.cpp
    QML_FILES View/Menu.qml
    QML_FILES View/Calc.qml
)

# CONFIG += qmltypes
# QML_IMPORT_NAME = io.qt.examples.backend
# QML_IMPORT_MAJOR_VERSION = 1

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appchild_food PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appchild_food
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appchild_food PRIVATE
    Qt6::Quick
    Qt6::Gui
    Qt6::Qml
    Qt6::Sql
    Qt6::Core
)

include(GNUInstallDirs)
install(TARGETS appchild_food
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
