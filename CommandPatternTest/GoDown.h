#pragma once
#include "Command.h"
#include "Entity.h"
class GoDown : public Command
{
public:
	void execute(Entity& actor) override;

};

