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


    /// Create the commands ( to use the personnel )

    command[0] = new PrepareCommand(lead);
    command[1] = new RacingCommand(lead);
    command[2] = new StrategiseCommand(lead);
    command[3] = new WindTestingCommand(lead);
    command[4] = new SimulationTestingCommand(lead);
    command[5] = new ServiceCommand(lead);


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

// void Team::changeTestType(string type)
// {
//     // if (tester)
//     // {
//     //     delete tester;
//     // }

//     // if(type == "wind tunnel")
//     // {
//     //     tester = new WindTunnel();
//     // }else if(type == "simulation")
//     // {
//     //     tester = new Simulation();
//     // }
// }

string Team::getCompany()
{
    return company;
}
void Team::update()
{
    int currentWeek;
    currentWeek=registeredAt->getWeek();
    upcomingRaces = registeredAt->getRaces();
    //if


}

void Team::shipCarToFactory()
{
//TBD
}



CarMemento* Team::createMemento(bool b){
    if (b)
        return new CarMemento(currentCar);
    else
        return new CarMemento(futureCar);
}


   

void Team::reinstantiateMemento(CarMemento* me, bool b){
    if (b){
        //current car
        Formula1Car* mementoCar= me->getState();
        currentCar->setChasis(mementoCar->getChasis());
        currentCar->setEngine(mementoCar->getEngine());
        currentCar->setElectronics(mementoCar->getElectronics());
        currentCar->setSpoiler(mementoCar->getSpoiler());
        currentCar->setTyre(mementoCar->getTyre());
    }else{
        //future car
        Formula1Car* mementoCar= me->getState();
        futureCar->setChasis(mementoCar->getChasis());
        futureCar->setEngine(mementoCar->getEngine());
        futureCar->setElectronics(mementoCar->getElectronics());
        futureCar->setSpoiler(mementoCar->getSpoiler());
        futureCar->setTyre(mementoCar->getTyre());

    }
}

tuple< Race *, Race *, Race *> Team::getUpcomingRaces()
{
    return upcomingRaces;
}

Equipment* Team::getTeamEquipment()
{

    return teamEquipment;
}