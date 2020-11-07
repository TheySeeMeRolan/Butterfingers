#ifndef PROJECT_RACESTRATEGY_H
#define PROJECT_RACESTRATEGY_H

#include "Strategy.h"

class RaceStrategy: public Strategy{
public:
    virtual vector<Team*> race(vector<Team*> teams, Track* track, vector<vector<int>>);
    virtual int determineTeamRaceScore(Team*, int, int);
    virtual vector<Team*> sort(vector<Team*>,vector<int>, vector<int>&);
    virtual ~RaceStrategy();
};


#endif //PROJECT_RACESTRATEGY_H
