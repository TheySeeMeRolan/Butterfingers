#ifndef PROJECT_RIGHTCURVEPART_H
#define PROJECT_RIGHTCURVEPART_H

#include "TrackPart.h"

class RightCurvePart: public TrackPart{
public:
    RightCurvePart(int l, int d);
    void addPart(TrackPart* part); //Can only be called on Track Composite
    bool isEuropean(); //Can only be called on Track Composite
};

#endif //PROJECT_RIGHTCURVEPART_H
