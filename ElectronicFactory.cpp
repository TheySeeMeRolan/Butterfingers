#include "ElectronicFactory.h"

ElectronicFactory::ElectronicFactory(Team* t): HumanFactory(t){

}

Human* ElectronicFactory::makeEngineer(Human * s){
    Human* re = new ElectronicEngineer(getTeam(), s);
    return re;
}

Human* ElectronicFactory::makePersonnel(Human * s){
    Human* re = new Logistician(getTeam(), s);
    return re;
}