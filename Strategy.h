#ifndef PROJECT_STRATEGY_H
#define PROJECT_STRATEGY_H

#include "Team.h"
#include "Track.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track)=0;
    virtual int determineTeamRaceScore(Team*,int, int)=0;
    virtual ~Strategy();
};

#endif //PROJECT_STRATEGY_H
