#ifndef PROJECT_LEFTCURVEPART_H
#define PROJECT_LEFTCURVEPART_H

#include "TrackPart.h"

class LeftCurvePart: public TrackPart{
public:
    LeftCurvePart(int l, int d);
    void addPart(TrackPart* part); //Can only be called on Track Composite
    bool isEuropean(); //Can only be called on Track Composite
};

#endif //PROJECT_LEFTCURVEPART_H
