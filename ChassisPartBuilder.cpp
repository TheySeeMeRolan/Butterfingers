#include "ChassisPartBuilder.h"

void ChassisPartBuilder::buildPart(){
    this->chassisPart = new Chassis();
}

CarPart* ChassisPartBuilder::getPart(){
    return this->chassisPart;
}

ChassisPartBuilder::~ChassisPartBuilder(){
    cout << "Destructed ChassisPartBuilder (Derived)" << endl;
}