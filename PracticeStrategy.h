#ifndef PROJECT_PRACTICESTRATEGY_H
#define PROJECT_PRACTICESTRATEGY_H
#include "Strategy.h"

class PracticeStrategy: public Strategy{
public:
    virtual vector<Team*> race(vector<Team*> teams, Track* track);
    PracticeStrategy();
};

#endif //PROJECT_PRACTICESTRATEGY_H
