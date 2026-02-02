cmake_minimum_required(VERSION 3.10)
project(MyCppApp VERSION 1.0)

# 1. Set C++ Standard (C++17 is the modern baseline)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. Include Headers
# This tells the compiler that #include "MyClass.hpp" refers to files in the include/ folder
include_directories(include)

# 3. Automatic File Discovery (Optional but Recommended)
# This finds all .cpp files in src/ so you don't have to list them manually
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 4. Set Output Directory
# This puts your final .exe into the bin/ folder instead of burying it in build/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# 5. Build the Executable
add_executable(${PROJECT_NAME} ${SOURCES})

# 6. Tests executable target
# Builds the tests binary from tests/main.cpp linking with the required sources
add_executable(tests_exec tests/main.cpp src/users.cpp)
target_include_directories(tests_exec PRIVATE ${CMAKE_SOURCE_DIR}/include)
set_target_properties(tests_exec PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)