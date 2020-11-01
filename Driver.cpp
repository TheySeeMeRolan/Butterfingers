 #include "Driver.h"
 #include<iostream>
#include<string>
#include "string.h"

 
Driver::Driver(): Personnel() {

}


Driver::Driver(Team* team, Human * s) : Personnel(team, s){

}

Driver::Driver(Team* team, Human *p, int l, int s):Personnel(team, p){
    luck= l;
    skill= s;
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

    // send it along the line
    successor->handleRequest(p);
}

void Driver::drive()
{
    cout<<"Team "<<team->getCompany()<<"'s driver drives the car."<<endl;

}


int Driver:: getSkill(){
    return skill;
}

int Driver:: getLuck(){
    return luck;
}





