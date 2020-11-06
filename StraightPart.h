#ifndef PROJECT_STRAIGHTPART_H
#define PROJECT_STRAIGHTPART_H

#include "TrackPart.h"

class StraightPart: public TrackPart{
public:
    StraightPart(int l, int d);    
    void addPart(TrackPart* part); //Can only be called on Track Composite
    bool isEuropean(); //Can only be called on Track Composite
    ~StraightPart();
};

#endif //PROJECT_STRAIGHTPART_H
