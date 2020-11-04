#ifndef PROJECT_STRATEGY_H
#define PROJECT_STRATEGY_H

#include "Track.h"

#include <iostream>
#include <string>
#include <vector>

class Team;
using namespace std;

class Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track)=0;
    virtual int determineTeamRaceScore(Team*,int, int)=0;
    virtual ~Strategy();
};

Strategy::~Strategy() {

}

#endif //PROJECT_STRATEGY_H
