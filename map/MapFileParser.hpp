#pragma once

#include <string>
#include <vector>
#include <sstream>

#include "IBlock.hpp"
#include "BlockData.hpp"

namespace kf
{
	class MapFileParser {
	public:
		kf::BlockData getSingleBlockDataFromString(const std::string& str);
		std::vector<kf::BlockData> getVectorOfBlockDataFromString(const std::string& str);
	};
}