#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include "Human.h"

using namespace std;

class Command{
protected:
    Human* human;
public:
    virtual void execute()=0;
    Command(Human* human);
    virtual ~Command();
};

#endif //PROJECT_COMMAND_H
