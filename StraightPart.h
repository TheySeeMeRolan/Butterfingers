//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_STRAIGHTPART_H
#define PROJECT_STRAIGHTPART_H

#include "TrackPart.h"

class StraightPart: public TrackPart{
public:
    int getTotalDifficulty();
    int getTotalLength();
    StraightPart(int l, int d);    
};

#endif //PROJECT_STRAIGHTPART_H
