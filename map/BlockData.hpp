#pragma once

#include <cstdint>

namespace kf
{
	struct BlockData
	{
		std::uint32_t x{ 0 };
		std::uint32_t y{ 0 };
		std::uint16_t blockId{ 0 };
		bool valid{ false };
	};
}