cmake_minimum_required(VERSION 3.16)
project(Bolt VERSION 1.0.0 LANGUAGES C)

# Global property to use folders in the IDE
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

file(GLOB SOURCES "src/*.c")
file(GLOB HEADERS "src/*.h")


# Include directory for modular CMake scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Include modular CMake scripts
include(CMakeOptions.txt)     # Build options configuration
include(CompilerFlags)        # Compiler flags and language standard
include(PackConfigurations)   # Package configurations
include(InstallConfigurations) # Installation configurations

# Add executable target for the project
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Enable testing for the project
enable_testing()