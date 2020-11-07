#ifndef PROJECT_CARPARTBUILDER_H
#define PROJECT_CARPARTBUILDER_H

#include <iostream> 
#include "CarPart.h"
using namespace std;

class CarPartBuilder{
public:
    virtual void buildPart()=0;
    virtual CarPart* getPart()=0;
    virtual ~CarPartBuilder();
};

#endif //PROJECT_CARPARTBUILDER_H
