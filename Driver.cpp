#include "Driver.h"
//#include "Team.cpp"

Driver::Driver(Team* team, Human *p, int l, int s,TeamResources* tR):Personnel(team, p,tR){
    luck= l;
    skill= s;
    typeHuman= "Driver";
}

void Driver::handleRequest(string p)
{
    if(p == "prepare")
    {
        
    }
    
    if(p == "test simulation")
    {
        this->drive();
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
        this->drive();
    }

    if (successor) 
    {
        successor->handleRequest(p);
    }
}

void Driver::drive()
{
    cout<<"Team "<<teamResources->getCompany()<<"'s driver starts the race in position: ";
}


int Driver:: getSkill(){
    return skill;
}

int Driver:: getLuck(){
    return luck;
}





