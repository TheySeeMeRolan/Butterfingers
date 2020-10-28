//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TRACKPARTFACTORY_H
#define PROJECT_TRACKPARTFACTORY_H
#include "TrackPart.h"

#include <iostream>
#include <string>

using namespace std;

class TrackPartFactory {
private:
    int length;
    int difficulty;
public:
    virtual TrackPart* CreatePart()=0;
    TrackPartFactory();
    TrackPartFactory(int l, int d);
    virtual ~TrackPartFactory();
};


#endif //PROJECT_TRACKPARTFACTORY_H
