//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_STRAIGHTPART_H
#define PROJECT_STRAIGHTPART_H

#include "TrackPart.h"

class StraightPart: public TrackPart{
public:
    virtual int getTotalDifficulty();
    virtual int getTotalLength();
    StraightPart();
    StraightPart(int l, int d);
};

#endif //PROJECT_STRAIGHTPART_H
