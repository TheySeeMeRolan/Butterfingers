//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_ENGINEPARTBUILDER_H
#define PROJECT_ENGINEPARTBUILDER_H

#include "Engine.h"
#include "CarPartBuilder.h"

class EnginePartBuilder: public CarPartBuilder{
private:
    Engine* enginePart;
public:
    virtual void buildPart() ;
    Engine* getPart();
    EnginePartBuilder();
};

#endif //PROJECT_ENGINEPARTBUILDER_H
