#include "AerodynamicsFactory.h"

AerodynamicsFactory::AerodynamicsFactory(Team* team,TeamResources* tR): HumanFactory(team,tR) {

}

Human* AerodynamicsFactory::makePersonnel(Human * s){
    int skill= (rand()%(100-0)+1)+0;
    cout<<"SKILLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"<< skill<<endl;
    int luck= (rand()%(100-0)+1)+0;    cout<<
    "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLUCK"<< luck<<endl;

    Human* re= new Driver(getTeam(),s,luck,skill,getTeamResources());
    return re;
}

Human* AerodynamicsFactory::makeEngineer(Human * s){
    Human* re= new AerodynamicsEngineer(getTeam(), s,getTeamResources());
    return re;
}

