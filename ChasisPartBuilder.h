#ifndef PROJECT_CHASISPARTBUILDER_H
#define PROJECT_CHASISPARTBUILDER_H

#include "Chasis.h"
#include "CarPartBuilder.h"

class ChasisPartBuilder: public CarPartBuilder{
private:
    Chasis* chasisPart;
public:
    void buildPart();
    CarPart* getPart();
    ~ChasisPartBuilder();
};

#endif //PROJECT_CHASISPARTBUILDER_H
