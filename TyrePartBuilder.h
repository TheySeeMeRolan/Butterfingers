//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TYREPARTBUILDER_H
#define PROJECT_TYREPARTBUILDER_H

#include "Tyre.h"
#include "CarPartBuilder.h"

class TyrePartBuilder: public CarPartBuilder{
private:
    Tyre* tyrePart;
public:
    virtual void buildPart() ;
    Tyre* getPart();
    TyrePartBuilder();
};

#endif //PROJECT_TYREPARTBUILDER_H
