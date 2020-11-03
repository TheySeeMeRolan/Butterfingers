#ifndef PROJECT_FORMULA1_H
#define PROJECT_FORMULA1_H

#include "Logistics.h"
#include "Track.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Formula1{
private:
    vector<LogisticObserver*> f1Teams;
    Logistics* f1Logistics;
    vector<Track*> tracksNonEU;
    vector<Track*> tracksEU;
    //Season* season;
public:
    Formula1();
    void prepareLogistics();
    void startSeason();
    void addTracks(vector<Track*> tracksToAdd);
    void addTeams(vector<LogisticObserver*> teamsToAdd);
};

#endif //PROJECT_FORMULA1_H
