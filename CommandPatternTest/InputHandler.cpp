#include "InputHandler.h"
#include "Entity.h"
#include "Stone.h"
#include "GoUp.h"
#include "GoDown.h"
#include "GoLeft.h"
#include "GoRight.h"
#include <iostream>
#include <utility>




void InputHandler::setButtonW(MOVECOMMAND cmd)
{
	// Should change the m_Buttons to point to different Commands.
	switch (cmd)
	{
	case MOVECOMMAND::UP :
		m_buttonW = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::DOWN : 
		m_buttonW = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::LEFT :
		m_buttonW = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::RIGHT : 
		m_buttonW = std::make_shared<GoUp>();
		break;
	default:
		break;
	}
}

void InputHandler::setButtonS(MOVECOMMAND cmd)
{
	// Should change the m_Buttons to point to different Commands.
	switch (cmd)
	{
	case MOVECOMMAND::UP:
		m_buttonS = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::DOWN:
		m_buttonS = std::make_shared<GoDown>();
		break;
	case MOVECOMMAND::LEFT:
		m_buttonS = std::make_shared<GoLeft>();
		break;
	case MOVECOMMAND::RIGHT:
		m_buttonS = std::make_shared<GoRight>();
		break;
	default:
		break;
	}
}

void InputHandler::setButtonA(MOVECOMMAND cmd)
{
	// Should change the m_Buttons to point to different Commands.
	switch (cmd)
	{
	case MOVECOMMAND::UP:
		m_buttonA = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::DOWN:
		m_buttonA = std::make_shared<GoDown>();
		break;
	case MOVECOMMAND::LEFT:
		m_buttonA = std::make_shared<GoLeft>();
		break;
	case MOVECOMMAND::RIGHT:
		m_buttonA = std::make_shared<GoRight>();
		break;
	default:
		break;
	}
}

void InputHandler::setButtonD(MOVECOMMAND cmd)
{
	// Should change the m_Buttons to point to different Commands.
	switch (cmd)
	{
	case MOVECOMMAND::UP:
		m_buttonD = std::make_shared<GoUp>();
		break;
	case MOVECOMMAND::DOWN:
		m_buttonD = std::make_shared<GoDown>();
		break;
	case MOVECOMMAND::LEFT:
		m_buttonD = std::make_shared<GoLeft>();
		break;
	case MOVECOMMAND::RIGHT:
		m_buttonD = std::make_shared<GoRight>();
		break;
	default:
		break;
	}
}

std::shared_ptr<Command> InputHandler::handleInput()
{

	char input;
	std::cout << "Where do you want to go?" << std::endl;
	std::cin >> input;
	printf("input is:%c\n\r", input);


	switch (input)
	{
	case 'w':
		return m_buttonW; // Dont use the move command on the unique pointer
		// because it will move it out and it will get destroyed which will 
		//destroy the member variable here. Edit: I should use a shared pointer and 
		// not use the move command.
	case 's':
		return m_buttonS;
	case 'a':
		return m_buttonA;
	case 'd':
		return m_buttonD;
	default:
		return NULL;
	}


	//if(ispressed(BUTTONS::BUTTON_W) {return m_buttonW}; isPressed returns true if that button was pressed.

}

bool InputHandler::isPressed(char input)
{
	switch (input)
	{
	case 'w' :
		return true;
	case 's':
		return true;
	case 'a':
		return true;
	case 'd':
		return true;
	default:
		return false;
	}
}
