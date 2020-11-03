#include "Formula1Car.h"

using namespace std;

void Formula1Car:: setEngine(Engine* engn){
    this->engine = engn;
}

void Formula1Car::setTyre(Tyre** trs){
    this->tyres[0] = trs[0];
    this->tyres[1] = trs[1];
    this->tyres[2] = trs[2];
    this->tyres[3] = trs[3];
}

void Formula1Car::setChasis(Chasis* chs){
    this->chasis= chs;
}

void Formula1Car::setElectronics(Electronics* elctr){
    this->electronics= elctr;
}

void Formula1Car::setSpoiler(Spoiler* splr){
    this->spoiler= splr;
}

Engine* Formula1Car:: getEngine(){
    return this->engine;
}

Tyre** Formula1Car:: getTyre(){
    return this->tyres;
}

Chasis* Formula1Car::getChasis(){
    return this->chasis;
}

Electronics* Formula1Car::getElectronics(){
    return this->electronics;
}
    
Spoiler* Formula1Car::getSpoiler(){
    return this->spoiler;
}

