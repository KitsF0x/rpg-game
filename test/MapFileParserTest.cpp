#include <gtest/gtest.h>
#include "MapFileParser.hpp"
#include "BlockData.hpp"

TEST(MapFileParserTest, can_convert_string_with_single_block_data_into_block_data_object)
{
	// Arrange
	kf::MapFileParser parser;
	std::string str{ "12 39 8" };

	// Act
	kf::BlockData data;
	data = parser.getSingleBlockDataFromString(str);

	// Assert
	EXPECT_EQ(data.x, 12);
	EXPECT_EQ(data.y, 39);
	EXPECT_EQ(data.blockId, 8);
	EXPECT_TRUE(data.valid);
}

TEST(MapFileParserTest, can_convert_string_with_blocks_data_separated_by_new_line_into_vector_of_block_data_objects)
{
	// Arrange
	kf::MapFileParser parser;
	std::string str{ "1 2 3\n4 5 6\n7 8 9" };

	// Act
	std::vector<kf::BlockData> data;
	data = parser.getVectorOfBlockDataFromString(str);

	// Assert
	EXPECT_EQ(data.size(), 3);

	EXPECT_EQ(data.at(0).x, 1);
	EXPECT_EQ(data.at(0).y, 2);
	EXPECT_EQ(data.at(0).blockId, 3);

	EXPECT_EQ(data.at(1).x, 4);
	EXPECT_EQ(data.at(1).y, 5);
	EXPECT_EQ(data.at(1).blockId, 6);

	EXPECT_EQ(data.at(2).x, 7);
	EXPECT_EQ(data.at(2).y, 8);
	EXPECT_EQ(data.at(2).blockId, 9);
}