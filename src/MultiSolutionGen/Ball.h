#pragma once

class Ball 
{
protected:
	sf::CircleShape mShape;
	sf::Vector2f mDirection;
	int mSpeed;
	float mRadius;
public:
	Ball();

	sf::CircleShape GetShape() { return mShape; }

	float GetPositionX() { return mShape.getPosition().x; }
	float GetPositionY() { return mShape.getPosition().y; }
	void SetPositionX(float _x) { mShape.setPosition(_x, GetPositionY()); }
	void SetPositionY(float _y) { mShape.setPosition(GetPositionX(), _y); }
	void SetPosition(float _x, float _y) { mShape.setPosition(_x, _y); }

	void SetDirection(float _x, float _y);
		
	void Move(float dt);

	bool CheckCollisionWindow(int width, int height);
};

//memcpy