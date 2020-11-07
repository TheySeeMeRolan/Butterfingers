#include "EngineFactory.h"

EngineFactory::EngineFactory(Team* t,TeamResources* tR): HumanFactory(t,tR){

}

Human* EngineFactory::makeEngineer(Human * s){
    Human* re= new EngineEngineer(getTeam(), s,getTeamResources());
    return re;
}

Human* EngineFactory::makePersonnel(Human * s){
    Human* re= new PitCrew(getTeam(), s,getTeamResources());
    return re;
}