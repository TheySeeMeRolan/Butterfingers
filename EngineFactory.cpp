#include "EngineFactory.h"

EngineFactory::EngineFactory(Team* t): HumanFactory(t){

}

Human* EngineFactory::makeEngineer(){
    Human* re= new makeEngineer(getTeam());
    return re;
}

Human* EngineFactory::makePersonnel(){
    Human* re= new PitCrew(getTeam());
    return re;
}