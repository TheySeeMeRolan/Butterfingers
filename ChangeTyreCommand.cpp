#include "ChangeTyreCommand.h"

ChangeTyreCommand::ChangeTyreCommand(Human * p): Command(p){}

void ChangeTyreCommand::execute(){
    human->handleRequest("changeTyre");
}