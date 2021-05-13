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
    Dec/imapdecfilter.h
    Dec/tmapdecfilter.h
    )

set(MAP_VIEW_FILES
    Views/MapView/ipsdoobjectview.h
    Views/MapView/isdfmapvew.h
    Views/MapView/imapuserview.h
    Views/MapView/cylinderview.cpp Views/MapView/cylinderview.h
    Views/MapView/rangeringview.h Views/MapView/rangeringview.cpp
)

set(MAP_FILES
    PsDoMap/imap.h
    PsDoMap/sdfmap.h
    PsDoMap/psdomap.h PsDoMap/psdomap.cpp
    )

set(MAP_USER_FILES
    MapUser/imapuser.h
    MapUser/rangering.h MapUser/rangering.cpp
    )

add_library(PsDoLib STATIC
    psdoconst.h
    qcomplex.cpp
    psdoobject.h
    qcomplex.h
    ${SDFS_FILES}
    ${MAP_VIEW_FILES}
    ${DEC_FILES}
    ${MAP_FILES}
    ${MAP_USER_FILES}
   )

target_link_libraries(PsDoLib PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(PsDoLib PRIVATE PSDOLIB_LIBRARY)
target_include_directories(PsDoLib PUBLIC .)
