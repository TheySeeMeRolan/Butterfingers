//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TRACKPART_H
#define PROJECT_TRACKPART_H

#include <iostream>
#include <string>

using namespace std;

class TrackPart{
private:
    int length;
    int difficulty;
    bool european;
public:
    //virtual void AddPart(TrackPart* part)=0;
    //virtual void setEuropean(bool E)=0;
    virtual int getTotalLength()=0;
    virtual int getTotalDifficulty()=0;
    //bool isEuropean();
    virtual ~TrackPart();
    TrackPart();
    TrackPart(int l, int d);
};

#endif //PROJECT_TRACKPART_H
