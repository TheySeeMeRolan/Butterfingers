//
// Created by ro on 2020/11/06.
//

#include "OrderTyresCommand.h"

OrderTyresCommand::OrderTyresCommand(Human *p) : Command(p)
{

}

void OrderTyresCommand::execute() {
    human->handleRequest("orderTyres");

}
