#ifndef BUTTERFINGERS_TEAMRESOURCES_H
#define BUTTERFINGERS_TEAMRESOURCES_H

// car builder
#include "vector"
#include "Formula1Car.h"
#include "EnginePartBuilder.h"
#include "TyrePartBuilder.h"
#include "ChasisPartBuilder.h"
#include "ElectronicsPartBuilder.h"
#include "SpoilerPartBuilder.h"

//Memento
#include "CarMemento.h"

// template
#include "Test.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "Equipment.h"


#include<iostream>
#include<string>
#include<tuple>

class Race;

class TeamResources {
private:
    int currentWeek;
    vector <Race*> raceSchedule;
    Equipment* teamEquipment;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    int windTunnelTokens;
    Test * windTest;
    Test * simulationTest;
    string company;
    vector<int> tyresToOrder;

public:
    void construct();
    void cloneCar();
    TeamResources(string,vector<Race*> sRaces);
    string getCompany();
    void test(Formula1Car* c);
    void changeTestType();
    Engine* getEngine();
    Tyre** getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();
    void setCurrentWeek(int cD);
    int getCurrentWeek();

    //memento functions
    CarMemento* createMemento(bool b);// if bool true create memento of current car else create memento of future car
    void reinstantiateMemento(CarMemento* me, bool b);// bool is to check for future or current car. if true current car else future car:)

    // template
    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void changeTestType(string type);
    ~TeamResources();
    void shipCarToFactory();

    //getters for logistic
    vector< Race *> getRaceSchedule();
    void setRaceSchedule(vector<Race*> uR);
    Equipment* getTeamEquipment();


    Formula1Car *getCar(bool current);
    vector<int> getTyresToOrder();
    void setTyresToOrder(vector<int> t);
};


#endif //BUTTERFINGERS_TEAMRESOURCES_H
