#include <gtest/gtest.h>
#include "BlockDataToBlocksConverter.hpp"

TEST(BlockDataToBlocksConverterTest, can_convert_vector_of_block_data_into_vector_of_blocks)
{
	// Arrange
	std::vector<kf::BlockData> data = {
		kf::BlockData{10, 20, 1, true},
		kf::BlockData{20, 30, 1, true}
	};
	kf::BlockDataToBlocksConverter converter;

	// Act
	auto blocks = converter.convert(data);

	// Assert
	EXPECT_EQ(blocks.size(), 2);
	EXPECT_EQ(blocks.at(0)->getPosition(), sf::Vector2f(10, 20));
	EXPECT_EQ(blocks.at(1)->getPosition(), sf::Vector2f(20, 30));
	EXPECT_STREQ(blocks.at(0)->getName(), "Grass");
}