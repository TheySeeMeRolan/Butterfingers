//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_RACE_H
#define PROJECT_RACE_H

#include "Equipment.h"
#include "Track.h"
//#include "State.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Race{
private:
    string location;
    vector<int> logStatement;
    int date;
    Equipment* equipment;
    Track* track;
    bool european;
//    State* state;
public:
    Race(Track* t);
    void update();
    Track* getTrack();
    void StoreEquipment(Equipment* equipment);
    void race();
};

#endif //PROJECT_RACE_H
