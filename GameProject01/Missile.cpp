#include "Missile.h"

void Missile::render(sf::RenderTarget& target)
{
	target.draw(this->shape);
}

sf::Shape& Missile::getShape()
{
	return shape;
}
