#include "ChassisPartBuilder.h"

void ChassisPartBuilder::buildPart(){
    this->chasisPart = new Chassis();
}

CarPart* ChassisPartBuilder::getPart(){
    return this->chasisPart;
}

ChassisPartBuilder::~ChassisPartBuilder(){
    cout << "Destructed ChassisPartBuilder (Derived)" << endl;
}