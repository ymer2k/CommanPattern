#include "Entity.h"

Entity::Entity()
{
	m_position.x = 0;
	m_position.y = 0;
}

void Entity::setPos(Pos position)
{
	m_position = position;
}

Entity::Pos Entity::getPos()
{
	return m_position;
}

void Entity::setSpeed(int speed)
{
	m_moveSpeed = speed;
}

int Entity::getSpeed()
{
	return m_moveSpeed;
}
