#ifndef PROJECT_QUALIFYINGSTRATEGY_H
#define PROJECT_QUALIFYINGSTRATEGY_H

#include "Strategy.h"

class QualifyingStrategy: public Strategy {
public:
    virtual vector<Team*> race(vector<Team*> teams, Track* track, vector<vector<int>>);
    virtual int determineTeamRaceScore(Team*, int, int);
    virtual vector<Team*> sort(vector<Team*>,vector<int>, vector<int>&);
    virtual ~QualifyingStrategy();
};


#endif //PROJECT_QUALIFYINGSTRATEGY_H
