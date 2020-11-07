#include "ChasisFactory.h"

ChasisFactory::ChasisFactory(Team* t,TeamResources* tR): HumanFactory(t,tR){

}

Human* ChasisFactory::makeEngineer(Human * s){
    Human* re= new ChasisEngineer(getTeam(), s,getTeamResources());
    return re;
}

Human* ChasisFactory::makePersonnel(Human * s){
    Human* re= new Strategist(getTeam(), s,getTeamResources());
    return re;
}