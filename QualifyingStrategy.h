//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_QUALIFYINGSTRATEGY_H
#define PROJECT_QUALIFYINGSTRATEGY_H

#include "Strategy.h"

class QualifyingStrategy: public Strategy{
public:
    virtual vector<Team*> race(vector<Team*> team, Track* track);
    QualifyingStrategy();
};


#endif //PROJECT_QUALIFYINGSTRATEGY_H
