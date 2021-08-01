cmake_minimum_required(VERSION 3.21)

project(HelloCppModules LANGUAGES CXX)

add_executable(HelloCppModules
	foo.ixx
    bar.ixx
    main.cpp
)

set_target_properties(
    HelloCppModules
    PROPERTIES CXX_STANDARD 20
)