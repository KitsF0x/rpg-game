#include "MapFileParser.hpp"

kf::BlockData kf::MapFileParser::getSingleBlockDataFromString(const std::string& str)
{
	std::stringstream ss{str};
	kf::BlockData data;
	
	ss >> data.x >> data.y >> data.blockId;
	data.valid = true;

	return data;
}

std::vector<kf::BlockData> kf::MapFileParser::getVectorOfBlockDataFromString(const std::string& str)
{
	std::vector<kf::BlockData> data;

	std::string tmpLine;
	std::istringstream iss(str);
	while (std::getline(iss, tmpLine))
	{
		data.push_back(getSingleBlockDataFromString(tmpLine));
	}

	return data;
}