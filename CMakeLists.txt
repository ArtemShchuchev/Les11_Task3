cmake_minimum_required(VERSION 3.10)
project(Task3)
add_library(DynamicLibrory SHARED DynamicLibrory/Leaver.h DynamicLibrory/Leaver.cpp)
add_executable(MyProgramm MyProgramm/MyProgramm.cpp)
target_link_libraries(MyProgramm DynamicLibrory)


# if (Visual Studio)
# настраиваю в качестве запускаемого проекта
# настройка на стандарт с++17
if(MSVC)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT MyProgramm)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
else()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()