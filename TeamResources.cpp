//
// Created by ro on 2020/11/04.
//

#include "TeamResources.h"
#include "Team.h"
#include "Subject.h"

TeamResources::TeamResources(string name)
{
    company = name;
}

TeamResources::~TeamResources()
{

}

string TeamResources::getCompany()
{
    return company;
}


// template
void TeamResources::runWindTest(Formula1Car * p)
{
    // send in the car to the test and have it return a car to replace the memento with
    // send in future or current car
    windTest->test(p);
}

void TeamResources::runSimulationTest(Formula1Car * p)
{
    // send in the car to the test and have it return a car to replace the memento with
    // send in future or current car
    simulationTest->test(p);
}

void TeamResources::setUpcomingRaces(tuple<Race *, Race *, Race *> uR)
{
//upcomingRaces = uR;
}

// void TeamResources::changeTestType(string type)
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
//
//void TeamResources::update()
//{
////    int currentWeek;
//    currentWeek=registeredAt->getWeek();
//    upcomingRaces = registeredAt->getRaces();
//    //if
//
//
//}

void TeamResources::shipCarToFactory()
{
//TBD
}



CarMemento* TeamResources::createMemento(bool b){
    if (b)
        return new CarMemento(currentCar);
    else
        return new CarMemento(futureCar);
}




void TeamResources::reinstantiateMemento(CarMemento* me, bool b){
    if (b){
        //current car
        Formula1Car* mementoCar= me->getState();
        currentCar->setChasis(mementoCar->getChasis());
        currentCar->setEngine(mementoCar->getEngine());
        currentCar->setElectronics(mementoCar->getElectronics());
        currentCar->setSpoiler(mementoCar->getSpoiler());
//        currentCar->setTyre(mementoCar->getTyre());
    }else{
        //future car
        Formula1Car* mementoCar= me->getState();
        futureCar->setChasis(mementoCar->getChasis());
        futureCar->setEngine(mementoCar->getEngine());
        futureCar->setElectronics(mementoCar->getElectronics());
        futureCar->setSpoiler(mementoCar->getSpoiler());
//        futureCar->setTyre(mementoCar->getTyre());

    }
}

tuple< Race *, Race *, Race *> TeamResources::getUpcomingRaces()
{
//    return upcomingRaces;
}

Equipment* TeamResources::getTeamEquipment()
{

    return teamEquipment;
}



Engine *TeamResources::getEngine() {
    return currentCar->getEngine();
}

Tyre **TeamResources::getTyre() {
//    return currentCar->getTyre();
    return nullptr;
}

Chasis *TeamResources::getChasis() {
    return currentCar->getChasis();
}

Electronics *TeamResources::getElectronics() {
    return currentCar->getElectronics();
}

Spoiler *TeamResources::getSpoiler() {
    return currentCar->getSpoiler();
}

Formula1Car *TeamResources::construct() {
    return nullptr;
}

Formula1Car *TeamResources::cloneCar() {
    return nullptr;
}

void TeamResources::test(Formula1Car *c) {

}

void TeamResources::changeTestType() {

}

void TeamResources::changeTestType(string type) {

}
