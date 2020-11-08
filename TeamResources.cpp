//
// Created by ro on 2020/11/04.
//

#include "TeamResources.h"


TeamResources::TeamResources(string name,vector<Race*> sRaces)
{
    construct();
    company = name;
    raceSchedule = sRaces;
    vector<int> resetTyres = {0,0,0};
    this->tyresToOrder = resetTyres;

}

TeamResources::~TeamResources()
{

}

string TeamResources::getCompany()
{
    return company;
}

int TeamResources::getWindTunnelTokens()
{
    return windTunnelTokens;
}

void TeamResources::setWindTunnelTokens(int p)
{
    windTunnelTokens = p;
}


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

vector< Race *> TeamResources::getRaceSchedule()
{
    return raceSchedule;
}

Equipment* TeamResources::getTeamEquipment()
{

    return teamEquipment;
}



Engine *TeamResources::getEngine() {
    return currentCar->getEngine();
}

Tyre *TeamResources::getTyre() {
    return currentCar->getTyres();
}

Chassis *TeamResources::getChasis() {
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

    //Tyre building
    this->carPartBuilder[1] = new TyrePartBuilder();
    this->carPartBuilder[1]->buildPart();
    this->currentCar->setTyre(this->carPartBuilder[1]->getPart());

    //Chassis building
    this->carPartBuilder[2] = new ChassisPartBuilder();
    this->carPartBuilder[2]->buildPart();
    this->currentCar->setChasis(this->carPartBuilder[2]->getPart());


    //Electronics building
    this->carPartBuilder[3] = new ElectronicsPartBuilder();
    this->carPartBuilder[3]->buildPart();
    this->currentCar->setElectronics(this->carPartBuilder[3]->getPart());

    //Spoiler building
    this->carPartBuilder[4] = new SpoilerPartBuilder();
    this->carPartBuilder[4]->buildPart();
    this->currentCar->setSpoiler(this->carPartBuilder[4]->getPart());

    this->currentCar2 = cloneCar();
    this->futureCar = cloneCar();
}

Formula1Car* TeamResources::cloneCar() {
    Formula1Car* car = new Formula1Car();

    if (currentCar == nullptr){
        cout << "currentCar needs to be set first to clone it to futureCar" << endl;
        this->construct();
    }

    car->setEngine(this->carPartBuilder[0]->getPart());
    car->setTyre(this->carPartBuilder[1]->getPart());
    car->setChasis(this->carPartBuilder[2]->getPart());
    car->setElectronics(this->carPartBuilder[3]->getPart());
    car->setSpoiler(this->carPartBuilder[4]->getPart());

    return car;
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

void TeamResources::setRaceSchedule(vector<Race *> uR) {
    this->raceSchedule = uR;

}

void TeamResources::setCurrentWeek(int cD)
{
this->currentWeek = cD;
}

int TeamResources::getCurrentWeek()
{
    return currentWeek;
}

vector<int> TeamResources::getTyresToOrder() {
    return this->tyresToOrder;
}

void TeamResources::setTyresToOrder(vector<int> t) {
    tyresToOrder=t;
}

CarPartBuilder *TeamResources::getTyrePartBuilder() {
    return this->carPartBuilder[1];
}