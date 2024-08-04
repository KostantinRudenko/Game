#include "Math.h"
#include <cmath>

int Math::Random(int max)
{
	srand(time(NULL));
	int random_number = std::rand() % (max + 1);
	return random_number;
}

float Math::getDistance(Vector2f V)
{
	V.x = pow(V.x, 2);
	V.y = pow(V.y, 2);
	return sqrt(V.x + V.y);
}

Vector2f Math::getNormalised(Vector2f V)
{
	float magnitude = getDistance(V);
	Vector2f normalised(V.x / magnitude, V.y / magnitude);
	return normalised;
}

void Math::Normalise(Vector2f& V)
{
	float magnitude = getDistance(V);
	V.x /= magnitude;
	V.y /= magnitude;
}
