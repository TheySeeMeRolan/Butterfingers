//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_CARPARTBUILDER_H
#define PROJECT_CARPARTBUILDER_H

class CarPartBuilder{
public:
    virtual void buildPart()=0;
    virtual ~CarPartBuilder();
    CarPartBuilder();
};
#endif //PROJECT_CARPARTBUILDER_H
