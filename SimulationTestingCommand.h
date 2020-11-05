#ifndef PROJECT_SIMULATIONTESTINGCOMMAND_H
#define PROJECT_SIMULATIONTESTINGCOMMAND_H

#include "Command.h"

class SimulationTestingCommand: public Command{
public:
    virtual void execute();
    SimulationTestingCommand(Human *human);
};

#endif 
