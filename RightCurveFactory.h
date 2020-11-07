#ifndef PROJECT_RIGHTCURVEFACTORY_H
#define PROJECT_RIGHTCURVEFACTORY_H

#include "TrackPartFactory.h"
#include "RightCurvePart.h"

class RightCurveFactory: public TrackPartFactory {
public:
    TrackPart* createPart(int l, int d);
    TrackPart* createPart();
    ~RightCurveFactory();
};


#endif //PROJECT_RIGHTCURVEFACTORY_H
