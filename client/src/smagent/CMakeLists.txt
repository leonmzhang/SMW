cmake_minimum_required(VERSION 3.6)
project(smagent)

set(MODULE_NAME smagent)

set(MODULE_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/smagent.c
    ${CMAKE_CURRENT_SOURCE_DIR}/agent.c
)

add_executable(${MODULE_NAME} ${MODULE_SRC_FILES})
