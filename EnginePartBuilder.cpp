#include "EnginePartBuilder.h"

void EnginePartBuilder::buildPart(){
    this->enginePart = new Engine();
}

CarPart* EnginePartBuilder::getPart(){
    return this->enginePart;
}

EnginePartBuilder::~EnginePartBuilder(){
    cout << "Destructed EnginePartBuilder (Derived)" << endl;
}