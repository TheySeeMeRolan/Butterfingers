
#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "LogisticObserver.h"
#include "Human.h"
#include "Command.h"
#include "Formula1Car.h"
#include "CarPartBuilder.h"
#include "CarMemento.h"
#include<iostream>
#include<string>
#include<tuple>

using namespace std;
class Race;
class Team: public LogisticObserver {
private:
    string company;
    Human* personnel;
    tuple<Race*, Race*, Race*> upcomingRaces;
    Equipment* teamEquipment;
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
    string getCompany();
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
    void shipCarToFactory();
};


#endif //PROJECT_TEAM_H
