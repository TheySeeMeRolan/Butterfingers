#include "EngineFactory.h"

EngineFactory::EngineFactory(Team* t): HumanFactory(t){

}

Human* EngineFactory::makeEngineer(Human * s){
    Human* re= new EngineEngineer(getTeam());
    return re;
}

Human* EngineFactory::makePersonnel(Human * s){
    Human* re= new PitCrew(getTeam());
    return re;
}