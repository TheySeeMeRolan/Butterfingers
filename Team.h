//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "LogisticOnserver.h"

#include<iostream>
#include<string>
#include<tuple>

using namespace std;

class Team: public LogisticOnserver {
private:
    string company;
    Human* personnel;
    tuple<Race*, Race*, Race*> upcomingRaces;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    Command* command[4];
    int windTunnelTokens;
public:
    Formula1Car* construct();
    Formula1Car* cloneCar();
    virtual void update();
    void test(Formula1Car* c);
    void changeTestType();
    Engine* getEngine();
    Tyre* getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();
    CarMemento* unload();
    void save(CarMemento* mem);
    void prepare();
    void race();
    void strategise();
    void test();
    Team();
    Team(Subject* s);
};


#endif //PROJECT_TEAM_H
