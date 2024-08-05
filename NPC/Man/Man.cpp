#include "Man.h"

Vector2f Man::getPosition()
{
	return sprite.getPosition();
}

void Man::setPosition(Vector2f V)
{
	sprite.setPosition(V);
}

MovingStates Man::getState() const
{
	return state;
}

void Man::setState(MovingStates state)
{
	this->state = state;
}

void Man::drawOn(RenderWindow& w)
{
	w.draw(sprite);
}

void Man::setFrame(Vector2i& pos)
{
	sprite.setTextureRect(IntRect(width * pos.x, height * pos.y, width, height));
}
