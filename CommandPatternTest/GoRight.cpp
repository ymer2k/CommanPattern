#include "GoRight.h"
#include <iostream>


void GoRight::execute(Entity& actor)
{
	Entity::Pos tempPosition;
	tempPosition.x = actor.getPos().x + actor.getSpeed();
	tempPosition.y = actor.getPos().y;
	actor.setPos(tempPosition);

	std::cout << "X:" << actor.getPos().x << " Y:" << actor.getPos().y << std::endl;

}
