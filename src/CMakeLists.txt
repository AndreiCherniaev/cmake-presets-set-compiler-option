cmake_minimum_required(VERSION 3.16)

project(console_test1 LANGUAGES CXX) #use for ${PROJECT_NAME}

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
)
# target_compile_options(${PROJECT_NAME} PRIVATE -Wno-packed-bitfield-compat) # second way, also ok

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})



