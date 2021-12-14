#pragma once
#include "Entity.h"
class Command
{

public:
	virtual ~Command() {};
	virtual void execute(Entity& actor) = 0; // 0 means it HAS to be used in subclasses

private:
};

