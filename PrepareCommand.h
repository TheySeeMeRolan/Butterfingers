//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_PREPARECOMMAND_H
#define PROJECT_PREPARECOMMAND_H

#include "Command.h"

class PrepareCommand: public Command{
public:
    virtual void execute();
    PrepareCommand(Human *);
};

#endif //PROJECT_PREPARE_H
