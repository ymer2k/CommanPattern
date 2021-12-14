#include "GoUp.h"
#include "Entity.h"
#include <iostream>


GoUp::GoUp()
{
}

void GoUp::execute(Entity& actor)
{
	Entity::Pos tempPosition;
	tempPosition.x = actor.getPos().x;
	tempPosition.y = actor.getPos().y + actor.getSpeed();
	actor.setPos(tempPosition);
	std::cout << "X:" << actor.getPos().x << " Y:" << actor.getPos().y << std::endl;
}
