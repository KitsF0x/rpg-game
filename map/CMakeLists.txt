add_library(map STATIC "MapFileParser.cpp" "BlockDataToBlocksConverter.cpp" "MapFileLoader.cpp")
target_include_directories(map PUBLIC .)
target_link_libraries(map PUBLIC blocks)