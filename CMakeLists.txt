cmake_minimum_required(VERSION 3.30)
project(practice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(practice nasahelper.cpp nasahelper.rc  )

#find_package(cpr CONFIG REQUIRED)
#target_link_libraries(practice PRIVATE cpr::cpr)
