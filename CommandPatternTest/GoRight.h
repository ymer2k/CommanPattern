#pragma once
#include "Command.h"
#include "Entity.h"
class GoRight : public Command
{
	void execute(Entity& actor) override;

};

