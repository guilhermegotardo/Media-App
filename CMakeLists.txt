cmake_minimum_required(VERSION 3.15)
project(MediaApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directory
include_directories(
    include/core 
    include/playback
    include/web
    external/httplib
)

# Output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# Source files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(media_app ${SOURCES})

# Link to VLC or FFmpeg here later