#ifndef PROJECT_RACE_H
#define PROJECT_RACE_H

//member variable includes
#include "Equipment.h"
#include "Track.h"
#include "Log.h"

//includes for the strategy pattern
#include "Strategy.h"
#include "PracticeStrategy.h"
#include "QualifyingStrategy.h"
#include "RaceStrategy.h"

//general functionality includes
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Race{
private:
    //vectors to objects and integers for the results of a race
    vector<Team*> teams;
    vector<Equipment*> equipment;
    vector<int> logStatement;
    vector<vector<int>> tyreSets;
    Log* log;

    //pointers to objects
    Strategy* strategy;
    Track* track;

    //member variables
    string location;
    int date;
    bool european;

public:
    Race(Track* t, string location,Log* logIn);
    ~Race();

    //behavioral
    void update(); //update is the ___in the strategy pattern
    void race(); //race simulates the Race-weekend

    //getters
    vector<int> getLogStatement();
    string getLocation();
    Track* getTrack();
    bool isEuropean();

    //setters
    void addTeam(Team* t);
    void storeEquipment(Equipment* teamEquipment);
    void shipTyres(vector<int> t);

};

#endif //PROJECT_RACE_H
