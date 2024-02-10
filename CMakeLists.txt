cmake_minimum_required(VERSION 3.27)
project(vlk_test)
set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)


find_package(Vulkan REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${Vulkan_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)

add_subdirectory(glfw-3.3.9)
include_directories(glfw-3.3.9/include)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(glm-master)
include_directories(glm-master)
target_link_libraries(${PROJECT_NAME} glm)
