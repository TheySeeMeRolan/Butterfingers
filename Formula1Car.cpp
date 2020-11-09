#include "Formula1Car.h"

using namespace std;

void Formula1Car::setEngine(CarPart* engn){
    this->engine = (Engine*)engn;
}

void Formula1Car::setTyre(CarPart* trs){
    this->tyres = (Tyre*)trs;
}

void Formula1Car::setchassis(CarPart* chs){
    this->chassis= (Chassis*)chs;
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

Chassis* Formula1Car::getchassis(){
    return this->chassis;
}

Electronics* Formula1Car::getElectronics(){
    return this->electronics;
}
    
Spoiler* Formula1Car::getSpoiler(){
    return this->spoiler;
}

Formula1Car::~Formula1Car()
{
    cout<<endl<<"DELETING Formula1Car: "<<endl;
    if (chassis)
    delete chassis;
    if (spoiler)
    delete spoiler;
    if (electronics)
    delete electronics;
    if (engine)
    delete engine;
    if (tyres)
    delete tyres;
}

