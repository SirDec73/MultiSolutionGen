#include "pch.h"
#include "Ball.h"

sf::Vector2f Normalize(const sf::Vector2f& source)
{
	float length = sqrt((source.x * source.x) + (source.y * source.y));
	if (length != 0)
		return sf::Vector2(source.x / length, source.y / length);
	else
		return source;
}

Ball::Ball() {
	mRadius = 50.f;
	mShape = sf::CircleShape(mRadius);
	mDirection = { 1.f,0.f };
	mSpeed = 100;

	mShape.setOrigin(mShape.getRadius(), mShape.getRadius());
}

void Ball::Move(float dt) {
	mShape.move(mSpeed * dt * mDirection.x, mSpeed * dt * mDirection.y);
}

bool Ball::CheckCollisionWindow(int width, int height) {
	float px = GetPositionX();

	if (px - mRadius <= 0 || px + mRadius >= width) {
		mDirection.x = -mDirection.x;
		return true;
	}

	float py = GetPositionY();

	if (py - mRadius <= 0 || py + mRadius >= height) {
		mDirection.y = -mDirection.y;
		return true;
	}
}

void Ball::SetDirection(float _x, float _y) { 
	//mDirection = { _x,_y }; 
	mDirection = Normalize({ _x,_y });
}