#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Man
{
private:
	Sprite sprite;
	Vector2f position;
	int width;
	int height;

public:
	enum class MovingStates
	{
		moving,
		standing
	};

private:
	MovingStates state;

public:

	Vector2f getPosition() const;
	void setPositiion(Vector2f V);
	MovingStates getState() const;
	void setState(MovingStates state);
	void drawOn(RenderWindow& w);

	Man(Texture& T, int Width, int Height) :
	width(Width), height(Height), state(MovingStates::standing)
	{
		sprite.setTexture(T);
		sprite.setTextureRect(IntRect(0, 0, width, height));
		
	}

};