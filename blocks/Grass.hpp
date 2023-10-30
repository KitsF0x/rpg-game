#pragma once

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
	};
}