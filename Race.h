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
    vector<int> logStatement;
    vector<Equipment*> equipment;
    Strategy* strategy;
    Track* track;

    string location;
    int date;
    bool european;
    Strategy* strategy;
    vector<vector<int>> tyreSets;
public:
    Race(Track* t, string location);
    ~Race();

    //behavioral
    void update();//update is the ___in the strategy pattern
    void race();//race simulates the Race-weekend

    //getters
    vector<int> getLogStatement();
    string getLocation();
    Track* getTrack();
    bool isEuropean();

    //setters
    void addTeam(Team* t);
    void storeEquipment(Equipment* teamEquipment);
    void race();
    void shipTyres(vector<int> t);

};

#endif //PROJECT_RACE_H
