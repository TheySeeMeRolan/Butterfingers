#ifndef PROJECT_RACESTRATEGY_H
#define PROJECT_RACESTRATEGY_H

#include "Strategy.h"

class RaceStrategy: public Strategy{
public:
    virtual vector<Team*> race(vector<Team*> teams, Track* track);
    virtual int determineTeamRaceScore(Team*, int, int);
    virtual ~RaceStrategy();
};


#endif //PROJECT_RACESTRATEGY_H
