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
    
    if(p == "test simulation")
    {

    }
    
    if(p == "test windtunnel")
    {

    }
    
    if(p == "strategise")
    {
        
    }

    if(p == "service")
    {

    }
    
    if(p == "racing")
    {
        
    }

    if (successor) 
    {
        successor->handleRequest(p);
    }
}

void PitCrew::changeTyre(){
    teamResources->getTyrePartBuilder()->buildPart();
    teamResources->getCar(true)->setTyre(teamResources->getTyrePartBuilder()->getPart());
    cout<<"The "<<teamResources->getCompany()<<" teams Pitcrew changes the cars tyre to: ";
}