// CommandPatternTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "InputHandler.h"
#include "Stone.h"
#include "StoneFast.h"


// Command()
// inputhandler()
// Stone() : public Entity()
// Entity()
// 
// GoUpCommand() : public Command()
// GoDownCommand() : public Command()
// GoLeft COmmand() : public Command()
// GoRight Command() : public Command()
int main()
{
    //Define objects
    Stone stone;
    StoneFast stoneFast;


    //Set controls.
    InputHandler input;
    input.setButtonW(InputHandler::MOVECOMMAND::UP);
    input.setButtonS(InputHandler::MOVECOMMAND::DOWN);
    input.setButtonA(InputHandler::MOVECOMMAND::LEFT);
    input.setButtonD(InputHandler::MOVECOMMAND::RIGHT);

    //Some loop so I can Do move commands and then an undo button. Should print Position everytime
while (1) // the "game" loop
{
    //char input;
    //std::cout << "Where do you want to go?" << std::endl;
    //std::cin >> input;
    //printf("input is:%c\n\r",input );


    auto command = input.handleInput();
    if (command)
    {
        command->execute(stoneFast);
    }

}


}

