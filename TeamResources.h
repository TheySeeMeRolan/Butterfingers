//
// Created by ro on 2020/11/04.
//

#ifndef BUTTERFINGERS_TEAMRESOURCES_H
#define BUTTERFINGERS_TEAMRESOURCES_H


/// Human Factories
#include "HumanFactory.h"
#include "AerodynamicsFactory.h"
#include "ElectronicFactory.h"
#include "ChasisFactory.h"
#include "EngineFactory.h"

//Humans
#include "Human.h"
#include "AerodynamicsEngineer.h"
#include "ElectronicEngineer.h"
#include "ChasisEngineer.h"
#include "EngineEngineer.h"
#include "Strategist.h"
#include "Driver.h"
#include "Logistician.h"
#include "PitCrew.h"

// car builder
#include "Formula1Car.h"
#include "CarPartBuilder.h"

// commands
#include "Command.h"
#include "PrepareCommand.h"
#include "RacingCommand.h"
#include "StrategiseCommand.h"
#include "TestingCommand.h"
#include "ServiceCommand.h"
#include "WindTestingCommand.h"
#include "SimulationTestingCommand.h"

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
    tuple<Race*, Race*, Race*> upcomingRaces;
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
    virtual void update();
    void test(Formula1Car* c);
    void changeTestType();
    string getCompany();
    Engine* getEngine();
    Tyre** getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    //memento functions
    CarMemento* createMemento(bool b);// if bool true create memento of current car else create memento of future car
    void reinstantiateMemento(CarMemento* me, bool b);// bool is to check for future or current car. if true current car else future car:)

    // command functions will utilise the personell and engineers handle request function
    void prepare();
    void race();
    void strategise();
    void test();
    // template
    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void changeTestType(string type);
    TeamResources();
    ~TeamResources();
    void shipCarToFactory();

    //getters for logistic
    tuple< Race *, Race *, Race *> getUpcomingRaces();
    Equipment* getTeamEquipment();


};


#endif //BUTTERFINGERS_TEAMRESOURCES_H
