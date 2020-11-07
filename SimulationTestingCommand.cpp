//
// Created by ro on 2020/11/04.
//

#include "SimulationTestingCommand.h"

void SimulationTestingCommand::execute() 
{
    human->handleRequest("test simulation");
}

SimulationTestingCommand::SimulationTestingCommand(Human *human) : Command(human) {

}