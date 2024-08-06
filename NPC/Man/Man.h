#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

enum class MovingStates
{
	moving,
	standing
};

class Man
{
private:
	Sprite sprite;
	int width;
	int height;
	MovingStates state;

public:

	Vector2f getPosition();
	void setPosition(Vector2f V);
	MovingStates getState() const;
	void setState(MovingStates state);
	void drawOn(RenderWindow& w);

	void setFrame(Vector2i& pos);

	Man(Texture& T, int Width, int Height) :
	width(Width), height(Height), state(MovingStates::standing)
	{
		sprite.setTexture(T);
		sprite.setTextureRect(IntRect(0, 0, width, height));
	}

};