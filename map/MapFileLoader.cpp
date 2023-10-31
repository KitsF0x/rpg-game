#include "MapFileLoader.hpp"

std::vector<std::unique_ptr<kf::IBlock>> kf::MapFileLoader::load(const std::string& filename)
{
	std::string file = loadWholeFileAsString(filename);
	kf::MapFileParser parser;
	kf::BlockDataToBlocksConverter converter;
	
	auto blockData = parser.getVectorOfBlockDataFromString(file);
	return converter.convert(blockData);

}

std::string kf::MapFileLoader::loadWholeFileAsString(const std::string& filename)
{
	std::string wholeFile{ "" };
	std::ifstream file{ filename };
	std::string line{ "" };

	while (std::getline(file, line))
	{
		wholeFile += line + '\n';
	}
	return wholeFile;
}
