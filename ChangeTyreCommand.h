#ifndef PROJECT_CHANGETYRECOMMAND_H
#define PROJECT_CHANGETYRECOMMAND_H

#include "Command.h"

class ChangeTyreCommand :public Command {
public:
    virtual void execute();
    ChangeTyreCommand(Human* );
};

#endif // PROJECT_CHANGETYRECOMMAND_H
