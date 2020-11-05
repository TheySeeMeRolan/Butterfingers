#ifndef PROJECT_ENGINEPARTBUILDER_H
#define PROJECT_ENGINEPARTBUILDER_H

#include "Engine.h"
#include "CarPartBuilder.h"

class EnginePartBuilder: public CarPartBuilder{
private:
    Engine* enginePart;
public:
    void buildPart();
    CarPart* getPart();
    ~EnginePartBuilder();
};

#endif //PROJECT_ENGINEPARTBUILDER_H
