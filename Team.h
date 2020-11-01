//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "LogisticObserver.h"

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
#include "CarMemento.h"
#include "PrepareCommand.h"
#include "RacingCommand.h"
#include "StrategiseCommand.h"
#include "TestingCommand.h"

// template
#include "Test.h"
#include "WindTunnel.h"
#include "Simulation.h"


#include<iostream>
#include<string>
#include<tuple>

using namespace std;

class Team: public LogisticObserver {
private:
    string company;
    Human * lead;
    tuple<Race*, Race*, Race*> upcomingRaces;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    Command* command[4];
    int windTunnelTokens;
    HumanFactory** factories;
    Test * tester;

public:
    Formula1Car* construct();
    Formula1Car* cloneCar();
    virtual void update();
    Engine* getEngine();
    Tyre* getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();
    CarMemento* unload();
    void save(CarMemento* mem);

    // command functions will utilise the personell and engineers handle request function
    void prepare();
    void race();
    void strategise();
    void test();

    // template 
    void runTest(string car); ///get car from memento store and run test to see if its replaced
    void changeTestType(string type);

    string getCompany();

    Team();
    Team(Subject* s);
};


#endif //PROJECT_TEAM_H
