#include "HumanFactory.h"

HumanFactory::~HumanFactory(){
    // if(team){
    //     delete team;
    // }
}

HumanFactory::HumanFactory(Team* t,TeamResources* tR){
    team= t;
    teamResources = tR;
}

Team* HumanFactory::getTeam(){
    return team;
}

TeamResources *HumanFactory::getTeamResources() {
    return teamResources;
}
