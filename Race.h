#ifndef PROJECT_RACE_H
#define PROJECT_RACE_H

#include "Equipment.h"
#include "Track.h"
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
    vector<vector<int>> tyreSets;
public:
    Race(Track* t, string location);
    ~Race();
    void addTeam(Team* t);
    void update();
    bool isEuropean();
    string getLocation();
    Track* getTrack();
    vector<int> getLogStatement();
    void storeEquipment(Equipment* teamEquipment);
    void race();
    void shipTyres(vector<int> t);

};

#endif //PROJECT_RACE_H
