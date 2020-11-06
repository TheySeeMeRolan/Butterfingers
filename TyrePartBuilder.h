#ifndef PROJECT_TYREPARTBUILDER_H
#define PROJECT_TYREPARTBUILDER_H

#include "Tyre.h"
#include "CarPartBuilder.h"

class TyrePartBuilder: public CarPartBuilder {
private:
    Tyre* tyrePart;
public:
    void buildPart();
    void setType(string tyreType);
    CarPart* getPart();
    ~TyrePartBuilder();
};

#endif //PROJECT_TYREPARTBUILDER_H
