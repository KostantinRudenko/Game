#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

enum class Walkability
{
	NotAble,
	Easy
};

class Block
{
private:
	Sprite sprite;
	RectangleShape rect;
	Walkability walkability;
	int width;
	int height;
public:

	void setPosition(Vector2f V);
	Vector2f getPosition();
	void setWalkability(Walkability value);
	Walkability getWalkability();
	void drawOn(RenderWindow& w);

	Block(Texture& t, Vector2f size, int x, int y) :
	width(size.x), height(size.y), walkability(Walkability::Easy)
	{
		rect.setSize(size);
		rect.setFillColor(Color::Transparent);
		rect.setOutlineColor(Color::Transparent);
		rect.setOutlineThickness(5.0f);
		sprite.setTexture(t);
		sprite.setTextureRect(IntRect(0, 0, width, height));
		sprite.setPosition(x, y);
	}
};