#ifndef PROJECT_ELECTRONICSPARTBUILDER_H
#define PROJECT_ELECTRONICSPARTBUILDER_H

#include "Electronics.h"
#include "CarPartBuilder.h"

class ElectronicsPartBuilder: public CarPartBuilder{
private:
    Electronics* electronicPart;
public:
    void buildPart();
    CarPart* getPart();
    ~ElectronicsPartBuilder();
};


#endif //PROJECT_ELECTRONICSPARTBUILDER_H
