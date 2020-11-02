#include "Formula1Car.h"

Formula1Car::Formula1Car(){

}

Formula1Car::Formula1Car(Engine* engn, Tyre** trs, Chasis* chs, Electronics* elctr, Spoiler* splr){
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
    engine= engn;
}

void Formula1Car::setTyre(Tyre** trs){
    tyres[0]=trs[0];
    tyres[1]=trs[1];
    tyres[2]=trs[2];
    tyres[3]=trs[3];
}

void Formula1Car::setChasis(Chasis* chs){
    chasis= chs;
}

void Formula1Car::setElectronics(Electronics* elctr){
    electronics= elctr;
}

void Formula1Car::setSpoiler(Spoiler* splr){
      spoiler= splr;

}

Engine* Formula1Car:: getEngine(){
    return engine;
}

Tyre** Formula1Car:: getTyre(){
    //unsure if this is correct
    return tyres;
}

Chasis* Formula1Car::getChasis(){
    return chasis;
}

Electronics* Formula1Car::getElectronics(){
    return electronics;
}
    
Spoiler* Formula1Car::getSpoiler(){
    return spoiler;
}

