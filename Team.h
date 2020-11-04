#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "TeamResources.h"
#include "Logistics.h"
#include "LogisticObserver.h"
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

using namespace std;
class Team : public LogisticObserver {
private:
    string company;
    Human * lead;
    Command* command[6];
    TeamResources* teamResources;
    HumanFactory** factories;

public:
    Team();
    ~Team();
    virtual void update();
    void test(Formula1Car* c);
    void changeTestType();
    string getCompany();

    // command functions will utilise the personell and engineers handle request function
    void prepare();
    void race();
    void strategise();
    void test();

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
};


#endif //PROJECT_TEAM_H
