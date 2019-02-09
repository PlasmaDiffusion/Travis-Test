cmake_minimum_required(VERSION 2.8)
project(game)

enable_testing()

if(NOT GAME_SUPERBUILD_DIR)
  get_filename_component(GAME_SUPERBUILD_DIR "${CMAKE_SOURCE_DIR}/../" REALPATH)
  set(CMAKE_INSTALL_PREFIX "${GAME_SUPERBUILD_DIR}/install/game")
endif()

add_subdirectory(src)

install(DIRECTORY "src/include/" DESTINATION "include/game")
