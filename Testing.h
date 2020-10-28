//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TESTING_H
#define PROJECT_TESTING_H

#include "Command.h"

class Testing: public Command{
public:
    virtual void execute();
    Testing();
};

#endif //PROJECT_TESTING_H
