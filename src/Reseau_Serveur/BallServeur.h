#pragma once

class Ball 
{
protected:
	sf::CircleShape mShape;

public:
	Ball();

	sf::CircleShape GetShape() { return mShape; }
	void SetPosition(float _x, float _y) { mShape.setPosition(_x, _y); }
};

//memcpy