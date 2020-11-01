//
// Created by Michaela on 2020/11/01.
//

#ifndef PROJECT_SERVICECOMMAND_H
#define PROJECT_SERVICECOMMAND_H

#include "Command.h"

class ServiceCommand: public Command{
public:
    virtual void execute();
    ServiceCommand(Human *);
};

#endif 
