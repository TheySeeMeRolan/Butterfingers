#include "PrepareCommand.h"

PrepareCommand::PrepareCommand(Human * p): Command(p){}

void PrepareCommand::execute(){
    human->handleRequest("prepare");
}