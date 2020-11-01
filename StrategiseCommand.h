//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_STRATEGISECOMMAND_H
#define PROJECT_STRATEGISECOMMAND_H

#include "Command.h"

class StrategiseCommand: public Command{
public:
    virtual void execute();
    StrategiseCommand(Human *);
};

#endif //PROJECT_STRATEGISE_H
