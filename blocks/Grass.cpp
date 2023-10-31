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

void kf::Grass::setPosition(const sf::Vector2f& position)
{
	shape.setPosition(position);
}

sf::Vector2f kf::Grass::getPosition() const
{
	return shape.getPosition();
}

const char* kf::Grass::getName() 
{
	return "Grass";
}
