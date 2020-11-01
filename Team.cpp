#include "Team.h"

Team::Team()
{
    /// Create the Human array using the factories
    factories = new HumanFactory*[4];
    factories[0] = new AerodynamicsFactory(this);
    factories[1] = new ElectronicFactory(this);
    factories[2] = new ChasisFactory(this);
    factories[3] = new EngineFactory(this);

    // Strategist holds Driver, driver holds Logistician etc , start creation from the back (EngineEngineer)
    Human * tempHuman = factories[3]->makePersonnel(nullptr); // engine engineer with no successor
    tempHuman = factories[2]->makePersonnel(tempHuman); // electronics engineer with engine engineer successor 
    tempHuman = factories[1]->makePersonnel(tempHuman); // aerodynamics engineer with electronics engineer successor
    tempHuman = factories[0]->makePersonnel(tempHuman); // chasis engineer with aerodynamics engineer successor
    tempHuman = factories[3]->makeEngineer(tempHuman);  // pitcrew engineer with chasis engineer successor  
    tempHuman = factories[2]->makeEngineer(tempHuman); // logistician with pitcrew successor
    tempHuman = factories[1]->makeEngineer(tempHuman); // driver with logistician successor
    tempHuman = factories[0]->makeEngineer(tempHuman); // strategist with driver successor

    // engineers[1] = factories[1]->makeEngineer();
    // engineers[2] = factories[2]->makeEngineer();
    // engineers[3] = factories[3]->makeEngineer();

    // personnel[0] = factories[0]->makePersonnel(); 
    // personnel[1] = factories[1]->makePersonnel(); 
    // personnel[2] = factories[2]->makePersonnel(); 
    // personnel[3] = factories[3]->makePersonnel(); 

    /// Create the commands ( to use the personnel )

    command[0] = new PrepareCommand(lead);
    command[1] = new RacingCommand(lead);
    command[2] = new StrategiseCommand(lead);
    command[3] = new TestingCommand(lead);
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

void Team::test()
{
    command[3]->execute();
}

// template
void Team::runTest(string car)
{
    // send in the car to the test and have it return a car to replace the memento with
    if(car == "future")
    {
        tester->test(futureCar);
    }else if(car == "current")
    {
        tester->test(currentCar);
    }
}

void Team::changeTestType(string type)
{
    if (tester)
    {
        delete tester;
    }

    if(type == "wind tunnel")
    {
        tester = new WindTunnel();
    }else if(type == "simulation")
    {
        tester = new Simulation();
    }
}

string Team::getCompany()
{
    return company;
}