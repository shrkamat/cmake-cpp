cmake_minimum_required(VERSION 3.5)

project(cpp-trace LANGUAGES C CXX)

#find_package(LTTng REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(${PROJECT_NAME}
    main.cpp
    task_annotator_tracepoints.c
)

target_link_libraries(cpp-trace lttng-ust dl)
