//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_STRATEGISE_H
#define PROJECT_STRATEGISE_H

#include "Command.h"

class Strategise: public Command{
public:
    virtual void execute();
    Strategise();
};

#endif //PROJECT_STRATEGISE_H
