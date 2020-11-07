#include "ChasisPartBuilder.h"

void ChasisPartBuilder::buildPart(){
    this->chasisPart = new Chasis();
}

CarPart* ChasisPartBuilder::getPart(){
    return this->chasisPart;
}

ChasisPartBuilder::~ChasisPartBuilder(){
    cout << "Destructed ChasisPartBuilder (Derived)" << endl;
}