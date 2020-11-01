//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RACINGCOMMAND_H
#define PROJECT_RACINGCOMMAND_H

#include "Command.h"

class RacingCommand: public Command{
public:
    virtual void execute();
    RacingCommand(Human *);
};

#endif //PROJECT_RACING_H
