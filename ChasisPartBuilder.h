//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_CHASISPARTBUILDER_H
#define PROJECT_CHASISPARTBUILDER_H

#include "Chasis.h"
#include "CarPartBuilder.h"

class ChasisPartBuilder: public CarPartBuilder{
private:
    Chasis* ChasisPart;
public:
    virtual void buildPart() ;
    Chasis* getPart();
    ChasisPartBuilder();
};

#endif //PROJECT_CHASISPARTBUILDER_H
