#pragma once

#include <SFML/Graphics.hpp>

namespace kf
{
	class IBlock {
	public:
		virtual void update(float deltaTime) = 0;
		virtual void render(sf::RenderWindow& renderWindow) = 0;
		virtual ~IBlock() = default;
	};
}
