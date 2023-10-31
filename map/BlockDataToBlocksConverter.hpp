#pragma once

#include <vector>
#include <memory>

#include "IBlock.hpp"
#include "BlockData.hpp" 
#include "Grass.hpp"

namespace kf
{
	class BlockDataToBlocksConverter {
	public:
		std::vector<std::unique_ptr<kf::IBlock>> convert(std::vector<kf::BlockData> data);
	};
}