//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LEFTCURVEFACTORY_H
#define PROJECT_LEFTCURVEFACTORY_H

#include "TrackPartFactory.h"
#include "LeftCurvePart.h"

class LeftCurveFactory: public TrackPartFactory {
public:
    virtual TrackPart* CreatePart(int l, int d);
    virtual TrackPart* CreatePart();
};


#endif //PROJECT_LEFTCURVEFACTORY_H
