#include "PitCrew.h"
//#include "Team.cpp"

PitCrew::PitCrew(Team* team, Human * s,TeamResources* tR): Personnel(team, s,tR){
   typeHuman="PitCrew";    
}

void PitCrew::handleRequest(string p){
    
    if(p == "changeTyre")
    {
        this->changeTyre();
    }


    if (successor) 
    {
        successor->handleRequest(p);
    }
}

void PitCrew::changeTyre(){
    teamResources->getTyrePartBuilder()->buildPart();
    teamResources->getCar(true)->setTyre(teamResources->getTyrePartBuilder()->getPart());
    cout<<setw(18)<<""<<setw(52)<<teamResources->getCompany()+" Pitcrew changes the cars tyre to: ";
}