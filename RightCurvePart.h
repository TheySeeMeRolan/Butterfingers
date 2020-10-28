//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RIGHTCURVEPART_H
#define PROJECT_RIGHTCURVEPART_H

#include "TrackPart.h"

class RightCurvePart: public TrackPart{
public:
    virtual int getTotalDifficulty();
    virtual int getTotalLength();
    RightCurvePart();
    RightCurvePart(int l, int d);
};

#endif //PROJECT_RIGHTCURVEPART_H
