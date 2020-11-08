#include "ChassisFactory.h"

ChassisFactory::ChassisFactory(Team* t, TeamResources* tR): HumanFactory(t, tR){

}

Human* ChassisFactory::makeEngineer(Human * s){
    Human* re= new ChassisEngineer(getTeam(), s, getTeamResources());
    return re;
}

Human* ChassisFactory::makePersonnel(Human * s){
    Human* re= new Strategist(getTeam(), s,getTeamResources());
    return re;
}