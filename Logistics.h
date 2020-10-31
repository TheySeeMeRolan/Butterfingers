//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LOGISTICS_H
#define PROJECT_LOGISTICS_H

#include "Race.h"
#include "Report.h"
#include "Subject.h"
#include "Equipment.h"

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

    void scheduleSeason( vector<Track*> tracksForRaces);
    void kickOffSeason();
    void startNextWeek();
    void equip(Race* race, Equipment* equipment);
    virtual tuple< Race *, Race *, Race *> getRaces();
    Logistics():Subject()
    {};
    Logistics( vector<Team*> teams );
};

#endif //PROJECT_LOGISTICS_H
