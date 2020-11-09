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
        cout<<"Team "<<teamResources->getCompany()<<"'s driver gets ready to drive in the simulation"<<endl;
    }

    if(p == "racing")
    {
        this->drive();
    }

    Human::handleRequest(p);
}

void Driver::drive()
{
    cout<<"Team "<<teamResources->getCompany()<<"'s driver starts the race";
}


int Driver:: getSkill(){
    return skill;
}

int Driver:: getLuck(){
    return luck;
}

Driver::~Driver() {
    cout<<"Deleting Driver"<<endl;
    if (successor)
        delete successor;
}





