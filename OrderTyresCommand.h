
#ifndef BUTTERFINGERS_ORDERTYRESCOMMAND_H
#define BUTTERFINGERS_ORDERTYRESCOMMAND_H
#include "Command.h"

class OrderTyresCommand : public Command{
public:
    OrderTyresCommand(Human *p);
    void execute();

};

#endif //BUTTERFINGERS_ORDERTYRESCOMMAND_H
