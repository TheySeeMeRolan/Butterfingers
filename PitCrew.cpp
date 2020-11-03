#include "PitCrew.h"
#include "Team.cpp"

//PitCrew::PitCrew():Personnel(){
//
//}

PitCrew::PitCrew(Team* team, Human * s): Personnel(team, s){
    
}

void PitCrew::handleRequest(string p){
    
    if(p == "prepare")
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
    // team->changeTyre();
    // string newTyre = team->getTyre();
    // cout<<"The "<<team->getCompany()<<" teams Pitcrew changes the cars tyre to "<<newTyre<<endl;
}