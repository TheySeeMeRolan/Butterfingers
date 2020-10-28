//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_FORMULA1_H
#define PROJECT_FORMULA1_H

#include "Logistics.h"
#include "Track.h"
#include "Season.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Formula1{
private:
    vector<Team*> teams;
    Logistics* Logistics;
    vector<Track*> tracks;
    //Season* season;
public:
    Formula1(Logistics* l, Season* s);
    void prepareLogistics();
    void createTeams();
    void startSession();
};

#endif //PROJECT_FORMULA1_H
