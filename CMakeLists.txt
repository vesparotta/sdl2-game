cmake_minimum_required(VERSION 3.10)
project(cmake-sdl2 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add all c++ source files under the src directory
file(GLOB SOURCES "src/*.cc")
add_executable(${PROJECT_NAME} ${SOURCES})

# Add all headers files under the include directory
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Add SDL2 library
find_package(SDL2 REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2)

# Add SDL2_image library
#find_package(SDL2_image REQUIRED)
#target_link_libraries(${PROJECT_NAME} SDL2::Image)

# Add SDL2_ttf library
#find_package(SDL2_ttf REQUIRED)
#target_link_libraries(${PROJECT_NAME} SDL2::TTF)

# Add SDL2_net library
#find_package(SDL2_net REQUIRED)
#target_link_libraries(${PROJECT_NAME} SDL2::Net)

# Add SDL2_mixer library
#find_package(SDL2_mixer REQUIRED)
#target_link_libraries(${PROJECT_NAME} SDL2::Mixer)

# Add SDL2_gfx library
#find_package(SDL2_gfx REQUIRED)
#target_link_libraries(${PROJECT_NAME} SDL2::GFX)




# Add SDL2 CMake modules
# list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)
# Add compiler errors/warnings flags
# target_compile_options(${PROJECT_NAME} PRIVATE $<$<C_COMPILER_ID:MSVC>:/W4 /WX>)
# target_compile_options(${PROJECT_NAME} PRIVATE $<$<NOT:$<C_COMPILER_ID:MSVC>>:-Wall -Wextra -pedantic -Werror>)
