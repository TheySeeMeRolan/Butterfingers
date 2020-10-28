//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LOGISTICS_H
#define PROJECT_LOGISTICS_H

#include "Race.h"
#include "Report.h"
#include "Subject.h"
#include "Container.h"

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

class Logistics: public Subject{
protected:
    vector<Race*> races;
private:
    vector<Report*> weeklyReport;
    vector<Report*> monthlyReport;
public:
    void addTrack(Race*);
    void increaseInterval();
    void equip(Race* race, Container* container);
    virtual tuple<Race *, Race *, Race *> getRaces();
    virtual void notify();
    Logistics();
    Logistics(vector<Race*> races);
    Logistics(vector<Race*> races, int w, vector<Team*> t);
    Logistics(int w, vector<Team*> t);
};

#endif //PROJECT_LOGISTICS_H
