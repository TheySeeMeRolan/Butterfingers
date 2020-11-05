#ifndef PROJECT_SUBJECT_H
#define PROJECT_SUBJECT_H
//#include "Team.h"
#include <tuple>
#include <string>
#include <vector>
#include <iostream>
#include "Race.h"
#include "Observer.h"
//class Team;

using namespace std;

class Subject{
protected:
    vector<Observer*> teams;
    int week;
public:
    void attach(Observer* team);
    void detach(Observer* team);
    virtual tuple<Race*, Race*, Race*> getRaces()=0;
    virtual int getWeek();
    void notify();
    virtual ~Subject();
    Subject();
};

#endif //PROJECT_SUBJECT_H
