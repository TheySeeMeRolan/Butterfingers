//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TESTINGCOMMAND_H
#define PROJECT_TESTINGCOMMAND_H

#include "Command.h"

class TestingCommand: public Command{
public:
    virtual void execute();
    TestingCommand(Human *);
};

#endif //PROJECT_TESTING_H
