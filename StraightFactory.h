#ifndef PROJECT_STRAIGHTFACTORY_H
#define PROJECT_STRAIGHTFACTORY_H
#include "TrackPartFactory.h"
#include "StraightPart.h"

class StraightFactory: public TrackPartFactory{
public:
   TrackPart* createPart(int l, int d);
   TrackPart* createPart();
   ~StraightFactory();
};

#endif //PROJECT_STRAIGHTFACTORY_H
