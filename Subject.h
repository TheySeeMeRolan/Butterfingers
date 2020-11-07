#ifndef PROJECT_SUBJECT_H
#define PROJECT_SUBJECT_H
//#include "Team.h"
#include <tuple>
#include <string>
#include <vector>
#include <iostream>
#include "Observer.h"

using namespace std;

class Subject{
protected:
    vector<Observer*> teams;
    int week;
public:
    void attach(Observer* team);
    void detach(Observer* team);
    virtual int getWeek();
    void notify();
    virtual ~Subject();
    Subject();
};

#endif //PROJECT_SUBJECT_H
