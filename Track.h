//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TRACK_H
#define PROJECT_TRACK_H

#include "TrackPart.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Track: public TrackPart{
private:
    vector<TrackPart*>;
public:
    void addPart(TrackPart* part);
    void setEuropean(bool e);
    virtual int getTotalDifficulty() ;
    virtual int getTotalLength();
    bool isEuropean();
    Track();
    Track(int l, int d);
};

#endif //PROJECT_TRACK_H
