#include "TyrePartBuilder.h"

void TyrePartBuilder::buildPart()
{
    this->tyrePart = new Tyre();
}

CarPart* TyrePartBuilder::getPart()
{
    return this->tyrePart;
}

void TyrePartBuilder::setType(string tyreType)
{
    this->tyrePart->setTyreType(tyreType);
}

TyrePartBuilder::~TyrePartBuilder()
{
    cout << "Destructed TyrePartBuilder (Derived)" << endl;
}