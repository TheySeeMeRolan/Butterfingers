//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RACING_H
#define PROJECT_RACING_H

#include "Command.h"

class Racing: public Command{
public:
    virtual void execute();
    Racing();
};

#endif //PROJECT_RACING_H
