#pragma once


class Entity
{
public:
	Entity();

	struct Pos
	{
		int x;
		int y;
	};

	void setPos(Pos position);
	Pos getPos();

	void setSpeed(int speed);
	int getSpeed();


private:
	


	Pos m_position;
	int m_moveSpeed;

};

