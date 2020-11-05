#ifndef PROJECT_STRATEGY_H
#define PROJECT_STRATEGY_H

#include "Track.h"
#include "Team.h"

#include <iostream>
#include <string>
#include <vector>

class Team;
using namespace std;

class Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track)=0;
    virtual int determineTeamRaceScore(Team*,int, int)=0;
};

#endif //PROJECT_STRATEGY_H
