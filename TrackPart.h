//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TRACKPART_H
#define PROJECT_TRACKPART_H

#include <iostream>
#include <string>

using namespace std;

class TrackPart{
protected:
    int length;
    int difficulty;
    string trackPartType;
public:
    virtual void addPart(TrackPart* part)=0; //Can only be called on Track
    virtual bool isEuropean()=0; //Can only be called on Track

    virtual int getTotalLength();//Can be called on Track or TrackParts
    virtual int getTotalDifficulty();//Can be called on Track or TrackParts
    virtual string getTrackPartType();//Can be called on Track or TrackParts

    virtual ~TrackPart();
    TrackPart(int l, int d, string t);
};

#endif //PROJECT_TRACKPART_H
