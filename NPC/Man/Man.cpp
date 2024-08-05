#include "Man.h"

Vector2f Man::getPosition() const
{
	return position;
}

void Man::setPositiion(Vector2f V)
{
	position = V;
}

Man::MovingStates Man::getState() const
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