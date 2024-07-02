cmake_minimum_required(VERSION 3.22)
project(Gravity-Quest)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include Header Files
include_directories(include)

# Install H2DE
add_subdirectory(H2DE)

# Source Files
set(SOURCE
    src/main.cpp
)

# Add your source files
add_executable(${PROJECT_NAME} ${SOURCE})

# Link Libraries
target_link_libraries(${PROJECT_NAME} H2DE)

# Set output directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/dist
)

# Copy Assets folder
add_custom_command(
    OUTPUT ${CMAKE_BINARY_DIR}/bin/dist/assets
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/assets ${CMAKE_BINARY_DIR}/bin/dist/assets
    DEPENDS ${CMAKE_SOURCE_DIR}/assets
    COMMENT "Copying assets folder"
)
add_custom_target(copy_assets ALL
    DEPENDS ${CMAKE_BINARY_DIR}/bin/dist/assets
)
add_dependencies(${PROJECT_NAME} copy_assets)


# Add tests
enable_testing()
add_subdirectory(test)
