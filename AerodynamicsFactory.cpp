#include "AerodynamicsFactory.h"

AerodynamicsFactory::AerodynamicsFactory(Team* team,TeamResources* tR): HumanFactory(team,tR) {

}

Driver* AerodynamicsFactory::makePersonnel(Human * s){
    int skill= (rand()%(100-0)+1)+0;
    int luck= (rand()%(100-0)+1)+0;

    Driver* re= new Driver(getTeam(),s,luck,skill,getTeamResources());
    return re;
}

Human* AerodynamicsFactory::makeEngineer(Human * s){
    Human* re= new AerodynamicsEngineer(getTeam(), s,getTeamResources());
    return re;
}

