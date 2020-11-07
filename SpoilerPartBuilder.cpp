#include "SpoilerPartBuilder.h"

void SpoilerPartBuilder::buildPart(){
    this->spoilerPart = new Spoiler();
}

CarPart* SpoilerPartBuilder::getPart(){
    return this->spoilerPart;
}

SpoilerPartBuilder::~SpoilerPartBuilder(){
    cout << "Destructed SpoilerPartBuilder (Derived)" << endl;
}