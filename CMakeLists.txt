cmake_minimum_required(VERSION 3.30)
project(practice)

include_directories(C:/Users/Balazsoficial\.vcpkg-clion/vcpkg/installed/x64-windows/include)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(practice nasa.cpp  )
