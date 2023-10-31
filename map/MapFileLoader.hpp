#pragma once

#include "BlockDataToBlocksConverter.hpp"
#include "MapFileParser.hpp"
#include <fstream>

namespace kf
{
	class MapFileLoader
	{
	public:
		std::vector<std::unique_ptr<kf::IBlock>> load(const std::string& filename);
		std::string loadWholeFileAsString(const std::string& filename);
	};
}