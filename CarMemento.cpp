#include"CarMemento.h"

CarMemento::CarMemento(Formula1Car* car){
    this->car->setChasis(car->getChasis());
    this->car->setTyre(car->getTyre());
    this->car->setEngine(car->getEngine());
    this->car->setElectronics(car->getElectronics());
    this->car->setSpoiler(car->getSpoiler());
}

Formula1Car* CarMemento::getState(){
    return car;
}