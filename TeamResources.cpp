//
// Created by ro on 2020/11/04.
//

#include "TeamResources.h"


TeamResources::TeamResources(string name)
{
    company = name;
    construct(); //set current car
    //initialise the 2 test Types

}

TeamResources::~TeamResources()
{

}

string TeamResources::getCompany()
{
    return company;
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

void TeamResources::test(Formula1Car *c) {

}

void TeamResources::changeTestType() {

}

void TeamResources::changeTestType(string type) {

}
void TeamResources::construct()
{
    cout << "Constructing a Formula1 car" << endl;
    this->currentCar = new Formula1Car();

    //Engine building
    this->carPartBuilder[0] = new EnginePartBuilder();
    this->carPartBuilder[0]->buildPart();
    this->currentCar->setEngine(this->carPartBuilder[0]->getPart());
    int seed =  (rand() % 30) + 1;
    srand(seed);

    //Tyre building
    this->carPartBuilder[1] = new TyrePartBuilder();
    this->carPartBuilder[1]->buildPart();
    this->currentCar->setTyre(this->carPartBuilder[1]->getPart());
    // srand(2);
    seed =  (rand() % 30) + 1;
    srand(seed);

    //Chasis building
    this->carPartBuilder[2] = new ChasisPartBuilder();
    this->carPartBuilder[2]->buildPart();
    this->currentCar->setChasis(this->carPartBuilder[2]->getPart());
    // srand(3);
    seed =  (rand() % 30) + 1;
    srand(seed);


    //Electronics building
    this->carPartBuilder[3] = new ElectronicsPartBuilder();
    this->carPartBuilder[3]->buildPart();
    this->currentCar->setElectronics(this->carPartBuilder[3]->getPart());
    // srand(4);
    seed =  (rand() % 30) + 1;
    srand(seed);

    //Spoiler building
    this->carPartBuilder[4] = new SpoilerPartBuilder();
    this->carPartBuilder[4]->buildPart();
    this->currentCar->setSpoiler(this->carPartBuilder[4]->getPart());
}

void TeamResources::cloneCar() {
    this->futureCar = new Formula1Car();

    if (currentCar == nullptr){
        cout << "currentCar needs to be set first to clone it to futureCar" << endl;
        this->construct();
    }

    this->futureCar->setEngine(this->carPartBuilder[0]->getPart());
    this->futureCar->setTyre(this->carPartBuilder[1]->getPart());
    this->futureCar->setChasis(this->carPartBuilder[2]->getPart());
    this->futureCar->setElectronics(this->carPartBuilder[3]->getPart());
    this->futureCar->setSpoiler(this->carPartBuilder[4]->getPart());
}

Formula1Car* TeamResources::getCar(bool current)
{
    if (current == true){
        return this->currentCar;
    } else {
        return this->futureCar;
    }
    return NULL;
}

int TeamResources::getWindTunnelTokens()
{
    return windTunnelTokens;
}

void TeamResources::setWindTunnelTokens(int p)
{
    windTunnelTokens = p;
}


