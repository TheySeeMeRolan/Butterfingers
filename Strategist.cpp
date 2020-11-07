#include "Strategist.h"
//#include "Team.cpp"

Strategist::Strategist(Team* t, Human * s,TeamResources* tR): Personnel(t, s,tR){
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
    cout<<"The "<<teamResources->getCompany()<<" teams strategist formulates it choice of tyre"<<endl;

    int chosenTyre= rand() % 3 ;
    vector<int> tyres = teamResources->getTyresToOrder();
    tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
    teamResources->setTyresToOrder(tyres);
}