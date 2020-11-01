#ifndef PROJECT_RACE_H
#define PROJECT_RACE_H

#include "Equipment.h"
#include "Track.h"
#include "Team.h"
#include "Strategy.h"
#include "PracticeStrategy.h"
#include "QualifyingStrategy.h"
#include "RaceStrategy.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Race{
private:
    vector<Team*> teams;
    string location;
    vector<int> logStatement;
    int date;
    vector<Equipment*> equipment;
    Track* track;
    bool european;
    Strategy* strategy;
public:
    Race(Track* t, string location);
    ~Race();
    void addTeam(Team* t);
    void update();
    Track* getTrack();
    vector<int> getLogStatement();
    void storeEquipment(Equipment* teamEquipment);
    void race();
};

#endif //PROJECT_RACE_H
