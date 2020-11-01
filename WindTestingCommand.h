//
// Created by Michaela on 2020/11/01.
//

#ifndef PROJECT_WINDTESTINGCOMMAND_H
#define PROJECT_WINDTESTINGCOMMAND_H

#include "Command.h"

class WindTestingCommand: public Command{
public:
    virtual void execute();
    WindTestingCommand(Human *);
};

#endif 
