cmake_minimum_required( VERSION 3.20.4 )

project ( Main )

set( target main )

set( sources main.cpp )
set( headers )

add_executable( ${target} ${sources} ${headers} )

target_link_libraries( ${target}
                       ArraysAndStrings
                     )