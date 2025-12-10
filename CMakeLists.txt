cmake_minimum_required(VERSION 3.12)
project(algo C CXX)
file(GLOB SRCS *.c *.cpp)
foreach(src ${SRCS})
  get_filename_component(name ${src} NAME_WE)
  string(REPLACE " " "_" name_no_space ${name})
  add_executable(${name_no_space} ${src})
endforeach()

find_package(Curses REQUIRED)
# The following line was commented out because the target "0001" does not exist.
# Please replace "0001" with the correct target to link with ncurses.
# target_link_libraries(0001 ${CURSES_LIBRARIES})
