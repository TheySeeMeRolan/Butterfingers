//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

class Command{
private:
    Human* human;
public:
    virtual void execute()=0;
    Command(Human* human);
    virtual ~Command();
};

#endif //PROJECT_COMMAND_H
