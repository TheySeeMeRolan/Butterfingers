#include "Team.h"


Team::Team(WeekCalender* schedule, string name,vector<Race*>sRaces)
{
    calender=schedule;


    teamResources = new TeamResources(name,sRaces);
    /// Create the Human array using the factories
    factories = new HumanFactory*[4];
    factories[0] = new AerodynamicsFactory(this,teamResources);
    factories[1] = new ElectronicFactory(this,teamResources);
    factories[2] = new ChasisFactory(this,teamResources);
    factories[3] = new EngineFactory(this,teamResources);

    // Strategist holds Driver, driver holds Logistician etc , start creation from the back (EngineEngineer)
    Human * tempHuman = factories[3]->makePersonnel(nullptr); // engine engineer with no successor
    tempHuman = factories[2]->makePersonnel(tempHuman); // electronics engineer with engine engineer successor 
    tempHuman = factories[1]->makePersonnel(tempHuman); // aerodynamics engineer with electronics engineer successor
    tempHuman = factories[0]->makePersonnel(tempHuman); // chasis engineer with aerodynamics engineer successor
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getSkill());
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getLuck());
    tempHuman = factories[3]->makeEngineer(tempHuman);  // pitcrew engineer with chasis engineer successor
    tempHuman = factories[1]->makeEngineer(tempHuman); // driver with logistician successor
    tempHuman = factories[0]->makeEngineer(tempHuman); // strategist with driver successor
    tempHuman = factories[2]->makeEngineer(tempHuman); // logistician with pitcrew successor
    lead = tempHuman;

    lead = tempHuman;

    /// Create the commands ( to use the personnel )
    command[0] = new PrepareCommand(lead);
    command[1] = new RacingCommand(lead);
    command[2] = new StrategiseCommand(lead);
    command[3] = new WindTestingCommand(lead);
    command[4] = new SimulationTestingCommand(lead);
    command[5] = new ServiceCommand(lead);
    command[6] = new ChangeTyreCommand(lead);

    // tests
    Hangar * hangar = new Hangar();
    windTest = new WindTunnel(teamResources, hangar); // team is the client of the memento pattern
    simulationTest = new Simulation(teamResources, hangar);
}

Team::~Team(){
    // for(int i ; i < 4)
    // {

    // }
}

// "button" functions
void Team::prepare()
{
    command[0]->execute();
}

void Team::race()
{
    command[1]->execute();
}

void Team::strategise()
{
    command[2]->execute();
}

void Team::testWindTunnel()
{
    command[3]->execute(); // executes humans
    runWindTest(teamResources->getCar(true)); // get current car from hangar
}

void Team::testSimulation()
{
    command[4]->execute(); // executes humans
    runSimulationTest(teamResources->getCar(true)); // get current car from hangar
}

void Team::service()
{
    command[5]->execute();
}

void Team::changeTyre()
{
    command[6]->execute();
}


vector<int> Team::getDriver() {
    return driverStats;
}

Human* Team::getPitCrew(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "PitCrew") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getLogistician(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "Logistician") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getStrategist(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "Strategist") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getElectricEngineer(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "ElectronicEngineer") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getEngineEngineer(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "EngineEngineer") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getChassisEngineer(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "ChassisEngineer") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getAerodynamicsEngineer(){
    Human* temp = lead;
    while (temp->getSuccesor()->getTypeHuman() != "AerodynamicsEngineer") {
        temp = temp->getSuccesor();
    }
    return temp;
}

Human* Team::getLead(){
    return lead;
}

TeamResources *Team::getTeamResources() {
    return teamResources;
}

void Team::update()
{
    currentWeek = calender->getWeek();
    teamResources->setCurrentWeek(currentWeek);
    cout<<"Team "<<teamResources->getCompany()<<" receives Calender Notification AND gets updated week : "<<currentWeek<<endl;
    prepare();

//    cout<<"Team "<<teamResources->getCompany()<<" gets updated week : "<<currentWeek<<endl;

}

// template
void Team::runWindTest(Formula1Car * p)
{
    // send in the car to the test and have it return a car to replace the memento with
    // send in future or current car
    windTest->test(p);
}

void Team::runSimulationTest(Formula1Car * p)
{
    // send in the car to the test and have it return a car to replace the memento with
    // send in future or current car
    simulationTest->test(p);
}
