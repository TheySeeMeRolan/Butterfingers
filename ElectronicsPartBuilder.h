//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_ELECTRONICSPARTBUILDER_H
#define PROJECT_ELECTRONICSPARTBUILDER_H

#include "Electronics.h.h"
#include "CarPartBuilder.h"

class ElectronicsPartBuilder: public CarPartBuilder{
private:
    Electronics* ElectronicPart;
public:
    virtual void buildPart() ;
    Electronics* getPart();
    ElectronicsPartBuilder();
};


#endif //PROJECT_ELECTRONICSPARTBUILDER_H
