#include "ElectronicFactory.h"

ElectronicFactory::ElectronicFactory(Team* t): HumanFactory(t){

}

Human* ElectronicFactory::makeEngineer(){
    Human* re = new ElectronicEngineer(getTeam());
    return re;
}

Human* ElectronicFactory::makePersonnel(){
    Human* re = new Logistician(getTeam());
    return re;
}