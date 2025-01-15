#include "pch.h"
#include "BallServeur.h"

Ball::Ball() {
	mShape = sf::CircleShape(50.f);
	mShape.setOrigin(mShape.getRadius(), mShape.getRadius());
	mShape.setFillColor(sf::Color::Red);
}
