#pragma once

#include <SFML/Graphics.hpp>

namespace kf
{
	class IBlock {
	public:
		virtual void update(float deltaTime) = 0;
		virtual void render(sf::RenderWindow& renderWindow) = 0;
		virtual const char* getName() = 0;

		virtual void setPosition(const sf::Vector2f& position) = 0;
		virtual sf::Vector2f getPosition() const = 0;

		virtual ~IBlock() = default;
	};
}
