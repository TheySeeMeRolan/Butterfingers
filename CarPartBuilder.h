#ifndef PROJECT_CARPARTBUILDER_H
#define PROJECT_CARPARTBUILDER_H

class CarPartBuilder{
public:
    virtual void buildPart()=0;
    virtual ~CarPartBuilder();
    CarPartBuilder();
};

CarPartBuilder::CarPartBuilder() {

}

CarPartBuilder::~CarPartBuilder() {

}

#endif //PROJECT_CARPARTBUILDER_H
