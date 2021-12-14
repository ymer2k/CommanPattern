#pragma once
#include "Command.h"
#include "Entity.h"
class GoUp : public Command
{
public:
	GoUp();

	void execute(Entity & actor) override;
};

