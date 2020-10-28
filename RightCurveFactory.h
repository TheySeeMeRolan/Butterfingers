//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RIGHTCURVEFACTORY_H
#define PROJECT_RIGHTCURVEFACTORY_H

#include "TrackPartFactory.h"

class RightCurveFactory: public TrackPartFactory {
public:
    virtual TrackPart* CreatePart();
    RightCurveFactory();
    RightCurveFactory(int l, int d);
};


#endif //PROJECT_RIGHTCURVEFACTORY_H
