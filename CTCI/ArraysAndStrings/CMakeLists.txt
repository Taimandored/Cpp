set( target ArraysAndStrings )

set( sources ArraysAndStrings.cpp )

set( headers ArraysAndStrings.h )

add_library( ${target} ${sources} ${targets} )

target_include_directories( ${target}
    PRIVATE ${PROJECT_INCLUDE_DIRS}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)