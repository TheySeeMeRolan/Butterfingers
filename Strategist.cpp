#include "Strategist.h"
#include "Team.cpp"

Strategist::Strategist(Team* t, Human * s): Personnel(t, s){
    typeHuman="Strategist";
}

void Strategist::handleRequest(string p){
    
    if(p == "prepare")
    {

    }
    
    if(p == "test simulation")
    {

    }
    
    if(p == "test windtunnel")
    {

    }
    
    if(p == "strategise")
    {
        this->strategise();
    }

    if(p == "service")
    {

    }
    
    if(p == "racing")
    {
        
    }

    // send it along the line
    if (successor) 
    {
        successor->handleRequest(p);
    }
    
}

void Strategist::strategise(){
    cout<<"The "<<team->getCompany()<<" teams strategist formulates a race plan"<<endl;
}