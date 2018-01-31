cmake_minimum_required(VERSION 3.7.2)

project(san)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-std=c++11 -fno-omit-frame-pointer -fno-optimize-sibling-calls -fsanitize=thread")

#set(CMAKE_CXX_COMPILER g++)
#set(CMAKE_CXX_FLAGS "-std=c++11 -fsanitize=thread -g -O1 -fPIE -pie")


add_executable(san
    main.cpp
)
target_link_libraries(san)



# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DI ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
find_package(Qt5Network)

add_executable(qsan
    qmain.cpp
)
target_link_libraries(qsan Qt5::Network)

# run with TSAN_OPTIONS="suppressions=../tsan.supp" ./qsan for 0 warnings
