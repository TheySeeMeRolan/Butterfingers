#include "AerodynamicsFactory.h"

AerodynamicsFactory::AerodynamicsFactory(Team* team): HumanFactory(team){
    
}

Human* AerodynamicsFactory::makePersonnel(){
    int skill= (rand()%(100-0)+1)+0;
    int luck= (rand()%(100-0)+1)+0;
    Human* re= new Driver(getTeam(),luck,skill);
Human* AerodynamicsFactory::makePersonnel(Human * s){
    int skill= (rand()%(20-4)+1)+4;
    int luck= (rand()%(90-10)+1)+10;
    Human* re= new Driver(getTeam(),s,luck,skill);
    return re;
}

Human* AerodynamicsFactory::makeEngineer(Human * s){
    Human* re= new AerodynamicsEngineer(getTeam(), s);
    return re;
}

