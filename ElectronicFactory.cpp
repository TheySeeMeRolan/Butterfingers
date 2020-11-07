#include "ElectronicFactory.h"

ElectronicFactory::ElectronicFactory(Team* t,TeamResources* tR): HumanFactory(t,tR){

}

Human* ElectronicFactory::makeEngineer(Human * s){
    Human* re = new ElectronicEngineer(getTeam(), s,getTeamResources());
    return re;
}

Human* ElectronicFactory::makePersonnel(Human * s){
    Human* re = new Logistician(getTeam(), s,getTeamResources());
    return re;
}