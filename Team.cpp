
#include "Team.h"


Team::Team(WeekCalender* schedule, string name,vector<Race*>sRaces)
{
    cout<<"Constructing Team "<<name<< endl;
    calender=schedule;


    teamResources = new TeamResources(name,sRaces);
    /// Create the Human array using the factories
    factories = new HumanFactory*[4];
    factories[0] = new AerodynamicsFactory(this,teamResources);
    factories[1] = new ElectronicFactory(this,teamResources);
    factories[2] = new ChassisFactory(this, teamResources);
    factories[3] = new EngineFactory(this,teamResources);

    // Strategist holds Driver, driver holds Logistician etc , start creation from the back (EngineEngineer)
    Human * tempHuman = factories[0]->makePersonnel(nullptr); // driver with no successor
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getSkill()); // driverstats.at(0) is the skill
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getLuck()); // driverstats.at(1) is the luck
    tempHuman = factories[0]->makePersonnel(nullptr); // creates a second driver with driver successor
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getSkill()); // driverstats.at(2) is the skill of the second driver
    driverStats.push_back(dynamic_cast<Driver *>(tempHuman)->getLuck()); // driverstats.at(3) is the luck of the second driver

    tempHuman = factories[3]->makePersonnel(tempHuman); // pitcrew with driver successor
    tempHuman = factories[2]->makePersonnel(tempHuman); // strategist with engine pitcrew successor
    tempHuman = factories[1]->makePersonnel(tempHuman); // logistician with electronics strategist successor

    tempHuman = factories[3]->makeEngineer(tempHuman);  // engine engineer with logistician successor
    tempHuman = factories[1]->makeEngineer(tempHuman); //  electronics engineer with engine engineer successor
    tempHuman = factories[0]->makeEngineer(tempHuman); // Aerodynamics engineer with electronics engineer successor
    tempHuman = factories[2]->makeEngineer(tempHuman); // chassis engineer with Aerodynamics engineer successor
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
    command[7] = new OrderTyresCommand(lead);

    Hangar* hangar = new Hangar();
    windTest = new WindTunnel(teamResources,hangar);
    simulationTest = new Simulation(teamResources,hangar);
}

Team::~Team()
{
    delete lead;
    for(int r = 0 ; r<8;r++)
        delete command[r];
    delete teamResources;
    delete simulationTest;
    delete windTest;

    for(int r = 0 ; r<3;r++)
        delete factories[r];
    delete [] factories;


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
    command[3]->execute();
    runWindTest(teamResources->getCar(true)); // get current car from hangar
}

void Team::testSimulation()
{
    cout<<endl<<"-----------------------RUNNING SIMULATION TEST-----------------------"<<endl;
    command[4]->execute();
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

void Team::orderTyres()
{
command[7]->execute();
}

vector<int> Team::getDriver() {
    return driverStats;
}


TeamResources *Team::getTeamResources() {
    return teamResources;
}

void Team::update()
{
    currentWeek = calender->getWeek();
    teamResources->setCurrentWeek(currentWeek);
    cout<<endl<<endl<<"Team "<<teamResources->getCompany()<<" receives Calender Notification AND gets updated week : "<<currentWeek<<endl;
    cout<<"=================================== "<<teamResources->getCompany()<<" WEEK : "<<currentWeek<<" =================================== "<<endl;
    prepare();
    strategise();
    orderTyres();



    if (teamResources->getRaceSchedule().at(currentWeek)== nullptr)
    {
        cout<<endl<<"-----------------------RUNNING TESTS AND MAKING ADJUSTMENTS-----------------------"<<endl<<endl;

        testWindTunnel();
        testSimulation();
        cout<<endl<<endl<<"-----------------------ALL TESTS AND ADJUSTMENTS DONE FOR WEEK-----------------------"<<endl<<endl;

    }
}
void Team::runWindTest(Formula1Car * p)
{

    windTest->test(p);
}

void Team::runSimulationTest(Formula1Car * p)
{
    // send in the car to the test and have it return a car to replace the memento with
    // send in future or current car
    simulationTest->test(p);
}

void Team::moveToNextSeason(WeekCalender *newCal, vector<Race *> newRaces)
{
    cout<<"TEAM "<< teamResources->getCompany() << " makes arrangements to move on to a new season:"<<endl;
    teamResources->swapToFutureCar();
    this->calender =newCal;
    this->currentWeek=-1;
    this->teamResources->setCurrentWeek(-1);
    this->teamResources->setRaceSchedule(newRaces);
    cout<<"All preparations made to move to start the new season ! "<<endl;

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

}
