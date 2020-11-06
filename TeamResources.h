//
// Created by ro on 2020/11/04.
//

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
    vector <Race*> upcomingRaces;
    Equipment* teamEquipment;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    int windTunnelTokens;
    Test * windTest;
    Test * simulationTest;


public:
    Formula1Car* construct();
    Formula1Car* cloneCar();
    void test(Formula1Car* c);
    void changeTestType();
    Engine* getEngine();
    Tyre** getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    //memento functions
    CarMemento* createMemento(bool b);// if bool true create memento of current car else create memento of future car
    void reinstantiateMemento(CarMemento* me, bool b);// bool is to check for future or current car. if true current car else future car:)

    // template
    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void changeTestType(string type);
    TeamResources();
    ~TeamResources();
    void shipCarToFactory();

    //getters for logistic
    tuple< Race *, Race *, Race *> getUpcomingRaces();
    void setUpcomingRaces(tuple< Race *, Race *, Race *> uR);
    Equipment* getTeamEquipment();


};


#endif //BUTTERFINGERS_TEAMRESOURCES_H
