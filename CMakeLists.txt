cmake_minimum_required(VERSION 3.13)
project(test-libigl-booleans)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 REQUIRED)
find_package(CGAL REQUIRED)
set(LIBIGL_PATH ${CMAKE_CURRENT_SOURCE_DIR}/libigl)
set(ASSETS_PATH ${CMAKE_CURRENT_SOURCE_DIR}/assets)

set(SOURCES
	main.cpp)

add_executable(test-libigl-booleans
	${SOURCES})

target_link_libraries(test-libigl-booleans PUBLIC CGAL::CGAL Eigen3::Eigen)
target_include_directories(test-libigl-booleans PUBLIC ${LIBIGL_PATH}/include)
target_compile_definitions(test-libigl-booleans PUBLIC -DASSET_PATH="${ASSETS_PATH}/")
