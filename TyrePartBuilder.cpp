#include "TyrePartBuilder.h"

void TyrePartBuilder::buildPart()
{
    this->tyrePart = new Tyre();
}

CarPart* TyrePartBuilder::getPart()
{
    return this->tyrePart;
}   

TyrePartBuilder::~TyrePartBuilder()
{
    cout << "Destructed TyrePartBuilder (Derived)" << endl;
}

