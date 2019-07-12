cmake_minimum_required(VERSION 3.0)
project(fdbc++)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(fdbc++ SHARED
  src/network.cpp
  src/fdb.cpp
  src/database.cpp
  src/options.cpp)

add_executable(simple_test
  src/main.cpp)
target_link_libraries(simple_test fdbc++ fdb_c pthread m rt) # add in the C FDB API library
