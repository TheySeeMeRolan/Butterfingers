 #include "Driver.h"
 #include<iostream>
#include<string>
#include "string.h"

 
Driver::Driver(): Personnel() {

}


Driver::Driver(Team* team, Human * s) : Personnel(team, s){

}

Driver::Driver(Team* team, int l, int s):Personnel(team){
    luck= l;
    skill= s;
}

void Driver::handleRequest(string p)
{
    if(p == "prepare")
    {
        this->drive();
    }else if(p == "test simulation")
    {
        this->drive();
    }else if(p == "test windtunnel")
    {

    }else if(p == "strategise")
    {
        
    }else if(p == "racing")
    {
        this->drive();
    }

    // send it along the line
    successor->handleRequest();
}

void Driver::drive()
{
    cout<<"Team "<<team->getCompany()<<"'s driver drives the car."<<endl;

}


int Driver:: getSkill(){
    retutn skill;
}

int Driver:: getLuck(){
    return luck;
}





