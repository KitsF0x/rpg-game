#pragma once

#include <SFML/System/Vector2.hpp>
#include "IBlock.hpp"

namespace kf
{
	class Grass : public IBlock {
	private:
		sf::RectangleShape shape;
	public:
		Grass();
		void update(float deltaTime) override;
		void render(sf::RenderWindow& renderWindow) override;

		void setPosition(const sf::Vector2f& position) override;
		sf::Vector2f getPosition() const override;

		const char* getName() override;
	};
}