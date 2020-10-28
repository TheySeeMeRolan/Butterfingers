//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_SUBJECT_H
#define PROJECT_SUBJECT_H

#include "Team.h"
#include "Race.h"
#include <tuple>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Subject{
protected:
    vector<Team*> teams;
    int week;
public:
    void attach(Team* team);
    void detach(Team* team);
    virtual tuple<Race*, Race*, Race*> getRaces()=0;
    virtual void notify()=0;
    virtual ~Subject();
    Subject();
    Subject(int w, vector<Team*> t);
};

#endif //PROJECT_SUBJECT_H
