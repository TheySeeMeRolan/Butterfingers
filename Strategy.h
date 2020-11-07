#ifndef PROJECT_STRATEGY_H
#define PROJECT_STRATEGY_H

//functionality includes
#include "Track.h"
#include "Team.h"

#include <iostream>
#include <string>
#include <vector>

class Team;
using namespace std;

class Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track,vector<vector<int>>)=0;
    virtual int determineTeamRaceScore(Team*,int, int)=0;
    virtual ~Strategy(){};
};

#endif //PROJECT_STRATEGY_H
