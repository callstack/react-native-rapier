cmake_minimum_required(VERSION 3.4.1)
project(ReactNativeRapier)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 14)

add_library(callstack-react-native-rapier            SHARED
            ../cpp/callstack-react-native-rapier.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
