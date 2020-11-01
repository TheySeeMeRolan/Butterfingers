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
    vector<TrackPart*> sections;
    bool european;
public:
    void addPart(TrackPart* part);
    int getTotalDifficulty();
    int getTotalLength();
    bool isEuropean();

    Track(bool isEuropean);
    ~Track();
};

#endif //PROJECT_TRACK_H
