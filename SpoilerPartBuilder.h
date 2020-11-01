#ifndef PROJECT_SPOILERPARTBUILDER_H
#define PROJECT_SPOILERPARTBUILDER_H

#include "Spoiler.h"
#include "CarPartBuilder.h"

class SpoilerPartBuilder: public CarPartBuilder{
private:
    Spoiler* tyrePart;
public:
    virtual void buildPart() ;
    Spoiler* getPart();
    SpoilerPartBuilder()
};

#endif //PROJECT_SPOILERPARTBUILDER_H
