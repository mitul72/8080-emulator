cmake_minimum_required(VERSION 3.13)  # CMake version check
project(8080_emulator)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard



file(GLOB_RECURSE LIB_SOURCES
        src/lib/Disassembler/*.cpp
)


# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES src/main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(8080_emulator ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE ${LIB_SOURCES})


add_executable(Disassembler 
"src/lib/Disassembler/disassembler.cpp")
