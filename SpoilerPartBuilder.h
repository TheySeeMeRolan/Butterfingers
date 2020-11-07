#ifndef PROJECT_SPOILERPARTBUILDER_H
#define PROJECT_SPOILERPARTBUILDER_H

#include "Spoiler.h"
#include "CarPartBuilder.h"

class SpoilerPartBuilder: public CarPartBuilder{
private:
    Spoiler* spoilerPart;
public:
    void buildPart() ;
    CarPart* getPart();
    ~SpoilerPartBuilder();
};

#endif //PROJECT_SPOILERPARTBUILDER_H
