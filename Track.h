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
    void addPart(TrackPart* part); // Should be added anonymously - i.e Factory->createPart() in the parameter
    int getTotalDifficulty();
    int getTotalLength();
    bool isEuropean();
    string getTrackPartType();

    Track(bool isEuropean);
    ~Track();// because the destructor manages the pointers within the vector
};

#endif //PROJECT_TRACK_H
