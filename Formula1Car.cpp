#include "Formula1Car.h"

using namespace std;

void Formula1Car::setEngine(CarPart* engn){
    this->engine = (Engine*)engn;
}

void Formula1Car::setTyre(CarPart* trs){
    this->tyres = (Tyre*)trs;
}

void Formula1Car::setChasis(CarPart* chs){
    this->chasis= (Chasis*)chs;
}

void Formula1Car::setElectronics(CarPart* elctr){
    this->electronics= (Electronics*)elctr;
}

void Formula1Car::setSpoiler(CarPart* splr){
    this->spoiler= (Spoiler*)splr;
}

Engine* Formula1Car::getEngine(){
    return this->engine;
}

Tyre* Formula1Car:: getTyres(){
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

