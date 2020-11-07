//
// Created by Janlu on 2020/11/07.
//

#include "OrderTyresCommand.h"

OrderTyresCommand::OrderTyresCommand(Human *p) : Command(p)
{

}

void OrderTyresCommand::execute() {
    human->handleRequest("orderTyres");

}