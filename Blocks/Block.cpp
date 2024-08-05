#include "Block.h"

void Block::setPosition(Vector2f V)
{
	sprite.setPosition(V);
	rect.setPosition(V);
}

Vector2f Block::getPosition()
{
	return sprite.getPosition();
}

void Block::setWalkability(Walkability value)
{
	walkability = value;
}

Walkability Block::getWalkability()
{
	return walkability;
}

void Block::drawOn(RenderWindow& w)
{
	w.draw(sprite);
	w.draw(rect);
}
