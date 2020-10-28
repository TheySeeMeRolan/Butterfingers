//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LEFTCURVEFACTORY_H
#define PROJECT_LEFTCURVEFACTORY_H

#include "TrackPartFactory.h"

class LeftCurveFactory: public TrackPartFactory {
public:
    virtual TrackPart* CreatePart();
    LeftCurveFactory();
    LeftCurveFactory(int l, int d);
};


#endif //PROJECT_LEFTCURVEFACTORY_H
