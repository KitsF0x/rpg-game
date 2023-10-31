#include "BlockDataToBlocksConverter.hpp"

std::vector<std::unique_ptr<kf::IBlock>> kf::BlockDataToBlocksConverter::convert(std::vector<kf::BlockData> data)
{
	std::vector<std::unique_ptr<kf::IBlock>> blocks;
	for (auto&& el : data) 
	{
		std::unique_ptr<kf::IBlock> block;

		switch (el.blockId) 
		{
		case 1:
			block = std::make_unique<kf::Grass>();
			break;
		}

		block->setPosition(sf::Vector2f(el.x, el.y));
		blocks.push_back(std::move(block));
	}
	return blocks;
}