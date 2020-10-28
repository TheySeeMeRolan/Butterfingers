//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_STRAIGHTFACTORY_H
#define PROJECT_STRAIGHTFACTORY_H
#include "TrackPartFactory.h"

class StaightFactory: public TrackPartFactory{
public:
    virtual TrackPart* CreatePart();
    StraightFactory();
    StraightFactory(int l, int d);
};

#endif //PROJECT_STRAIGHTFACTORY_H
