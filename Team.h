#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "Observer.h"
#include "WeekCalender.h"
#include "Human.h"
#include "Command.h"
#include "HumanFactory.h"
#include "Command.h"
#include "PrepareCommand.h"
#include "RacingCommand.h"
#include "StrategiseCommand.h"
#include "TestingCommand.h"
#include "ServiceCommand.h"
#include "WindTestingCommand.h"
#include "SimulationTestingCommand.h"
#include "Driver.h"
#include "AerodynamicsFactory.h"
#include "ElectronicFactory.h"
#include "ChasisFactory.h"
#include "EngineFactory.h"
#include "TeamResources.h"
#include "Test.h"
#include "Test.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "Hangar.h"

using namespace std;
class Team : public Observer
{

private:
    WeekCalender* calender;
    Human * lead;
    Command* command[6];
    TeamResources* teamResources;
    HumanFactory** factories;
    int currentWeek;
    Test * windTest;
    Test * simulationTest;

public:
    Team(WeekCalender* schedule, string);
    ~Team();
    virtual void update();
    void test(Formula1Car* c){};
    void changeTestType(){};
    

    // command functions will utilise the personell and engineers handle request function
    void prepare();
    void race();
    void strategise();
    void testWindTunnel();
    void testSimulation();
    void service();

    TeamResources* getTeamResources();
    //getters for the personnel hierarchy
    Human* getStrategist();
    Human* getLogistician();
    Human* getDriver();
    Human* getPitCrew();

    //getters for the engineers hierarchy
    Human* getChassisEngineer();
    Human* getAerodynamicsEngineer();
    Human* getElectricEngineer();
    Human* getEngineEngineer();
    Human* getLead();

    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///

};


#endif //PROJECT_TEAM_H
