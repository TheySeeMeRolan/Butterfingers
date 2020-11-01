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


#include<iostream>
#include<string>
#include<tuple>

using namespace std;
class Race;
class Team: public LogisticObserver {
private:
    string company;
    Human * lead;
    tuple<Race*, Race*, Race*> upcomingRaces;
    Equipment* teamEquipment;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    Command* command[4];
    int windTunnelTokens;
    HumanFactory** factories;
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
    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void changeTestType(string type);

    Team();
    Team(Subject* s);
    void shipCarToFactory();
};


#endif //PROJECT_TEAM_H
