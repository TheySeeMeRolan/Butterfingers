#include "EngineFactory.h"

EngineFactory::EngineFactory(Team* t): HumanFactory(t){

}

Human* EngineFactory::makeEngineer(Human * s){
    Human* re= new EngineEngineer(getTeam(), s);
    return re;
}

Human* EngineFactory::makePersonnel(Human * s){
    Human* re= new PitCrew(getTeam(), s);
    return re;
}