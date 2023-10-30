add_library(blocks STATIC "Grass.cpp")
target_include_directories(blocks PUBLIC .)
target_link_libraries(blocks PUBLIC sfml-system sfml-network sfml-graphics sfml-window)