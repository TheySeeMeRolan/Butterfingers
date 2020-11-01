#include "ServiceCommand.h"

ServiceCommand::ServiceCommand(Human * p): Command(p){}

void ServiceCommand::execute(){
    human->handleRequest("service");
}