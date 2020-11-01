#include "Logistician.h"

Logistician::Logistician(): Personnel(){

}

Logistician::Logistician(Team* t, Human * s): Personnel(t, s){

}

void Logistician::handleRequest(string p){
    if(p == "prepare")
    {
        this->prepareForRace();
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
        this->analyseTrack();
    }

    if (successor) 
    {
        successor->handleRequest(p);
    }
}

void Logistician::analyseTrack(){
    cout<<"The "<<team->getCompany()<<" team logistician analyses the track"<<endl;
}

void Logistician::prepareForRace(){
    cout<<"The "<<team->getCompany()<<" team logistician prepares for the race"<<endl;
}

 