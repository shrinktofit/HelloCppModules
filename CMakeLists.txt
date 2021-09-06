cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_SYSROOT_FLAG_CODE "list(APPEND CMAKE_CXX_SOURCE_FILE_EXTENSIONS ixx)")

project(HelloCppModules LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_executable(HelloCppModules
	foo.ixx
    bar.ixx
    main.cpp
)

target_compile_features(HelloCppModules PRIVATE cxx_std_20)
