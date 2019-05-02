cmake_minimum_required (VERSION 2.6)
project (courtenay)
set (CMAKE_CXX_STANDARD 11)
add_executable(courtenay main.cpp)
include_directories(
  /usr/local/include
  /usr/local/include/mapnik
  /usr/local/opt/icu4c/include
)
target_link_libraries(courtenay /usr/local/lib/libmapnik.dylib)
