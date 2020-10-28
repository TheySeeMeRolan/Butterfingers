//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_PREPARE_H
#define PROJECT_PREPARE_H

#include "Command.h"

class Prepare: public Command{
public:
    virtual void execute();
    Prepare();
};

#endif //PROJECT_PREPARE_H
