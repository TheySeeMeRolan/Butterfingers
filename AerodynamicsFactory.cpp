#include "AerodynamicsFactory.h"

AerodynamicsFactory::AerodynamicsFactory(Team* team): HumanFactory(team){
    
}

Human* AerodynamicsFactory::makePersonnel(){
    int skill= (rand()%(100-0)+1)+0;
    int luck= (rand()%(100-0)+1)+0;
    Human* re= new Driver(getTeam(),luck,skill);
    return re;
}

Human* AerodynamicsFactory::makeEngineer(){
    Human* re= new AerodynamicsEngineer(getTeam());
    return re;
}

