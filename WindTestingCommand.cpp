//
// Created by ro on 2020/11/04.
//
#include "WindTestingCommand.h"

 void WindTestingCommand::execute()
 {
    human->handleRequest("test windtunnel");
 }


WindTestingCommand::WindTestingCommand(Human *human) : Command(human) {

};