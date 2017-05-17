cmake_minimum_required(VERSION 3.7)
project(mylibrary)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

set(SOURCE_FILES example.cpp)
add_executable(example_png ${SOURCE_FILES})
target_link_libraries(example_png ${CONAN_LIBS})