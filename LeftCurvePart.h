//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LEFTCURVEPART_H
#define PROJECT_LEFTCURVEPART_H

#include "TrackPart.h"

class LeftCurvePart: public TrackPart{
public:
    virtual int getTotalDifficulty();
    virtual int getTotalLength();
    LeftCurvePart();
    LeftCurvePart(int l, int d);
};

#endif //PROJECT_LEFTCURVEPART_H
