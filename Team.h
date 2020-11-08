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
#include "ChangeTyreCommand.h"
#include "OrderTyresCommand.h"
#include "WindTestingCommand.h"
#include "SimulationTestingCommand.h"
#include "Driver.h"
#include "AerodynamicsFactory.h"
#include "ElectronicFactory.h"
#include "ChassisFactory.h"
#include "EngineFactory.h"
#include "TeamResources.h"
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
    Driver* driver;
    Command* command[8];
    TeamResources* teamResources;
    HumanFactory** factories;
    int currentWeek;
    vector<int> driverStats;
    Test * windTest;
    Test * simulationTest;


public:
    Team(WeekCalender* schedule, string,vector<Race*>);
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
    void changeTyre();
    void orderTyres();

    TeamResources* getTeamResources();
    //getters for the personnel hierarchy
    Human* getStrategist();
    Human* getLogistician();
    vector<int> getDriver();
    Human* getPitCrew();

    //getters for the engineers hierarchy
    Human* getChassisEngineer();
    Human* getAerodynamicsEngineer();
    Human* getElectricEngineer();
    Human* getEngineEngineer();
    Human* getLead();


    void runSimulationTest(Formula1Car *p);

    void runWindTest(Formula1Car *p);
};


#endif //PROJECT_TEAM_H
