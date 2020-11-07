
#include "StrategiseCommand.h"

void StrategiseCommand::execute() {
    human->handleRequest("strategise");
}

StrategiseCommand::StrategiseCommand(Human *h) : Command(h){

}
