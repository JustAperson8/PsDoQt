cmake_minimum_required(VERSION 3.14)

project(PsDoLib LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(SDFS_FILES
    SDFs/isdf.h
#    SDFs/isdfwithpos.h
#    SDFs/isdfwithrot.h

#    SDFs/asdfwithrot.cpp
#    SDFs/asdfwithrot.h
#    SDFs/asdfwithpos.cpp
#    SDFs/asdfwithpos.h

    SDFs/cylinder.cpp
    SDFs/cylinder.h
)

set(DEC_FILES
    Dec/idecpos.h
    Dec/idecrot.h
    Dec/igs.h
    Dec/agspos.cpp Dec/agspos.h
    Dec/agsrot.h Dec/agsrot.cpp
    Dec/imapdec.h
    )

set(MAP_VIEW_FILES
    Views/MapView/isdfmapvew.h
    Views/MapView/cylinderview.cpp
    Views/MapView/cylinderview.h
)

set(MAP_FILES
    PsDoMap/imap.h
    PsDoMap/sdfmap.h
    PsDoMap/psdomap.h PsDoMap/psdomap.cpp
    )

add_library(PsDoLib STATIC
    qcomplex.cpp
    qcomplex.h
    ${SDFS_FILES}
    ${MAP_VIEW_FILES}
    ${DEC_FILES}
    ${MAP_FILES}
   )

target_link_libraries(PsDoLib PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(PsDoLib PRIVATE PSDOLIB_LIBRARY)
target_include_directories(PsDoLib PUBLIC .)
