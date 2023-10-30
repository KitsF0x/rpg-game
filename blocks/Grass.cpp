#include "Grass.hpp"

kf::Grass::Grass() {
	shape.setFillColor(sf::Color::Green);
	shape.setSize(sf::Vector2f(64.0f, 64.0f));
}

void kf::Grass::update(float deltaTime)
{
	
}

void kf::Grass::render(sf::RenderWindow& renderWindow)
{
	renderWindow.draw(shape);
}