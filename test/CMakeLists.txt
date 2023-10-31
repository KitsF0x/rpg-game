add_executable(${PROJECT_NAME}-test "MapFileParserTest.cpp" "BlockDataToBlocksConverterTest.cpp")
target_link_libraries(${PROJECT_NAME}-test PRIVATE 
	GTest::gtest 
	GTest::gtest_main
	map
)