#ifndef PROJECT_TRACKPARTFACTORY_H
#define PROJECT_TRACKPARTFACTORY_H
#include "TrackPart.h"

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class TrackPartFactory {
public:
    virtual TrackPart* createPart(int l, int d)=0;
    virtual TrackPart* createPart()=0;
    virtual ~TrackPartFactory();
};


#endif //PROJECT_TRACKPARTFACTORY_H
