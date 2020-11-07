#include "ElectronicsPartBuilder.h"

void ElectronicsPartBuilder::buildPart(){
    this->electronicPart = new Electronics();
}

CarPart* ElectronicsPartBuilder::getPart(){
    return this->electronicPart;
}

ElectronicsPartBuilder::~ElectronicsPartBuilder(){
    cout << "Destructed ElectronicsPartBuilder (Derived)" << endl;
}