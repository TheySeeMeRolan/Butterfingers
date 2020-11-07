#include "RacingCommand.h"

RacingCommand::RacingCommand(Human * p): Command(p){}

void RacingCommand::execute(){
    human->handleRequest("racing");
}