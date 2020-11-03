#include "Formula1Car.h"

using namespace std;

Formula1Car::Formula1Car(Engine* engn, Tyre* trs[4], Chasis* chs, Electronics* elctr, Spoiler* splr){
    //Defeats purpose of builder...
    engine= engn;
    tyres[0]=trs[0];
    tyres[1]=trs[1];
    tyres[2]=trs[2];
    tyres[3]=trs[3];
    chasis= chs;
    electronics= elctr;
    spoiler= splr;
}

void Formula1Car:: setEngine(Engine* engn){
    this->engine = &engn;
}

void Formula1Car::setTyre(Tyre** trs){
    //This is a shallow copy of the pointers in trs 
    /*
    tyres[0]=trs[0];
    tyres[1]=trs[1];
    tyres[2]=trs[2];
    tyres[3]=trs[3]; */

    this->tyres = &trs;

}

void Formula1Car::setChasis(Chasis* chs){
    this->chasis= &chs;
}

void Formula1Car::setElectronics(Electronics* elctr){
    this->electronics= &elctr;
}

void Formula1Car::setSpoiler(Spoiler* splr){
    this->spoiler= &splr;
}

Engine* Formula1Car:: getEngine(){
    return this->&engine;
}

Tyre** Formula1Car:: getTyre(){
    //unsure if this is correct
    return this->&tyres;
}

Chasis* Formula1Car::getChasis(){
    return this->&chasis;
}

Electronics* Formula1Car::getElectronics(){
    return this->&electronics;
}
    
Spoiler* Formula1Car::getSpoiler(){
    return this->&spoiler;
}

