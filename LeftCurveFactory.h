#ifndef PROJECT_LEFTCURVEFACTORY_H
#define PROJECT_LEFTCURVEFACTORY_H

#include "TrackPartFactory.h"
#include "LeftCurvePart.h"

class LeftCurveFactory: public TrackPartFactory {
public:
    TrackPart* createPart(int l, int d);
    TrackPart* createPart();
};


#endif //PROJECT_LEFTCURVEFACTORY_H
