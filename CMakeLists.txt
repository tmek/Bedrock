cmake_minimum_required(VERSION 3.26)
project(Bedrock LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find vcpkg dependencies
find_package(GTest CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(Taskflow CONFIG REQUIRED)
find_package(Tracy CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)

# Bedrock library (header-only for now)
add_library(bedrock INTERFACE)
target_include_directories(bedrock INTERFACE include/)
target_link_libraries(bedrock INTERFACE
    GTest::gtest
    spdlog::spdlog
    Taskflow::Taskflow
    Tracy::TracyClient
    glm::glm
    range-v3::range-v3
)

# Enable testing
enable_testing()
add_subdirectory(tests)