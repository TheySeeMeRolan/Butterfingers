//
// Created by ro on 2020/11/04.
//

#include "TeamResources.h"


TeamResources::TeamResources(string name,vector<Race*> sRaces)
{
    construct(); //set current car
    //initialise the 2 test Types
    company = name;
    raceSchedule = sRaces;
}

TeamResources::~TeamResources()
{

}

string TeamResources::getCompany()
{
    return company;
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
        cout<<"Reinstating current car."<<endl;
        //current car
        Formula1Car* mementoCar= me->getState();
        currentCar->setChasis(mementoCar->getChasis());
        currentCar->setEngine(mementoCar->getEngine());
        currentCar->setElectronics(mementoCar->getElectronics());
        currentCar->setSpoiler(mementoCar->getSpoiler());
//        currentCar->setTyre(mementoCar->getTyre());
    }else{
        cout<<"Reinstating future car."<<endl;
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
    if(currentCar)
    {
        delete currentCar; // memory leak management
    }
    this->currentCar = new Formula1Car();

    //Engine building
    this->carPartBuilder[0] = new EnginePartBuilder();
    this->carPartBuilder[0]->buildPart();
    this->currentCar->setEngine(this->carPartBuilder[0]->getPart());


    //Tyre building
    this->carPartBuilder[1] = new TyrePartBuilder();
    this->carPartBuilder[1]->buildPart();
    this->currentCar->setTyre(this->carPartBuilder[1]->getPart());


    //Chasis building
    this->carPartBuilder[2] = new ChasisPartBuilder();
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

void TeamResources::setRaceSchedule(vector<Race *> uR) {
    this->raceSchedule;

}

void TeamResources::setCurrentWeek(int cD)
{
this->currentWeek = cD;
}

int TeamResources::getCurrentWeek()
{
    return currentWeek;
}

CarPartBuilder *TeamResources::getTyrePartBuilder() {
    return this->carPartBuilder[1];
}
int TeamResources::getWindTunnelTokens()
{
    return windTunnelTokens;
}

void TeamResources::setWindTunnelTokens(int p)
{
    windTunnelTokens = p;
}


