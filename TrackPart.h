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
    //virtual void AddPart(TrackPart* part)=0;
    //virtual void setEuropean(bool E)=0;
    //virtual bool isEuropean()=0;
    virtual int getTotalLength()=0;
    virtual int getTotalDifficulty()=0;
    virtual string getTrackPartType()=0;
    virtual ~TrackPart();
    TrackPart(int l, int d, string t);
};

#endif //PROJECT_TRACKPART_H
