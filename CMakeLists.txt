project (program)
include_directories(include)
set(SOURCES main.cpp src/Shape.cpp HEADERS include/Shape.h)

add_executable (program main.cpp src/Shape.cpp)

