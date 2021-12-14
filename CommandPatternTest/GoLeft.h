#pragma once
#include "Command.h"
#include "Entity.h"
class GoLeft : public Command
{

public:
	void execute(Entity& actor) override;

};

