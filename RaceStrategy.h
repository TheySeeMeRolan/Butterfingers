//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RACESTRATEGY_H
#define PROJECT_RACESTRATEGY_H

#include "Strategy.h"

class RaceStrategy: public Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track);
    RaceStrategy();
};


#endif //PROJECT_RACESTRATEGY_H
