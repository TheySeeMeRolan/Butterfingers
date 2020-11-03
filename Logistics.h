#ifndef PROJECT_LOGISTICS_H
#define PROJECT_LOGISTICS_H
//class Subject;
//
//#include "Race.h"
#include "Report.h"
#include "Subject.h"
//#include "Equipment.h"

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
    Logistics():Subject(){};
    void scheduleSeason( vector<Track*> tracksForEU,vector<Track*> tracksForNonEU);
    void kickOffSeason();
    void startNextWeek();
    void equipRace(Race* race, Equipment* equipment);
    void goToRace(Team* t);
    virtual tuple< Race *, Race *, Race *> getRaces();
};

#endif //PROJECT_LOGISTICS_H
