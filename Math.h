#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Math
{
public:
	int Random(int max);
	float getDistance(Vector2f V);
	void Normalise(Vector2f& V);
	Vector2f getNormalised(Vector2f V);
};