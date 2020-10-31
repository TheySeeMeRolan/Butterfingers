#include "HumanFactory.h"

HumanFactory::~HumanFactory(){
    if(team){
        delete team;
    }
}

HumanFactory::HumanFactory(Team* t){
    team= t;
}

Team* HumanFactory::getTeam(){
    return team;
}