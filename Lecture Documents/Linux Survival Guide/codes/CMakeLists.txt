cmake_minimum_required(VERSION 3.24)
project(codes)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExecutionScheduling TnP_execution_scheduling.cpp)
add_executable(ThreadLifecycle TnP_thread_lifecycle.cpp)
add_executable(POSIXFileSharing1 POSIX_file_sharing_1.c)
