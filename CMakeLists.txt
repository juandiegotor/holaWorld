cmake_minimum_required(VERSION 3.0.2)

project(hola)

enable_testing()


set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#Boost unit test framework
find_package(Boost REQUIRED)

include_directories(
	${Boost_INCLUDE_DIRS}
)

set (SOURCES
	src/hola.cpp
)

set (HEADERS
	src/hola.hpp
)

add_executable(test_hola test/test_hola.cpp)


add_executable(hola ${SOURCES} ${HEADERS})

target_link_libraries(test_hola PRIVATE  ${BOOST_INCLUDE_DIRS})
