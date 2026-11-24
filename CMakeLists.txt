cmake_minimum_required(VERSION 3.16)
project(temp-mail-plus CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tempmailplus
    src/main.cpp
    src/mailbox.cpp
    src/api.cpp
)

target_include_directories(tempmailplus PRIVATE include)

if(WIN32)
    target_link_libraries(tempmailplus PRIVATE userenv)
endif()
