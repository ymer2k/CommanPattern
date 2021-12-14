#pragma once
#include "Command.h"
#include <memory>

class InputHandler
{
public:
	enum class MOVECOMMAND
	{
		UP,
		DOWN,
		LEFT,
		RIGHT
	};

	enum class BUTTONS
	{
		BUTTON_W,
		BUTTON_S,
		BUTTON_A,
		BUTTON_D
	};


	// Change what the m_buttons point to (Which inputCommand class type) eg. GoUpCommand
	void setButtonW(MOVECOMMAND cmd); // For now, simplyfy this.
	void setButtonS(MOVECOMMAND cmd); // For now, simplyfy this.
	void setButtonA(MOVECOMMAND cmd); // For now, simplyfy this.
	void setButtonD(MOVECOMMAND cmd); // For now, simplyfy this.

	std::shared_ptr<Command> handleInput();


private:
	std::shared_ptr<Command> m_buttonW;
	std::shared_ptr<Command> m_buttonS;
	std::shared_ptr<Command> m_buttonD;
	std::shared_ptr<Command> m_buttonA;

	bool isPressed(char input);

	//Command* m_buttonW;
	//Command* m_buttonS;
	//Command* m_buttonD;
	//Command* m_buttonA;

};

