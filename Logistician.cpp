#include "Logistician.h"
#include "Team.cpp"

//Logistician::Logistician(): Personnel(){
//
//}

Logistician::Logistician(Team* t, Human * s): Personnel(t, s){

}

void Logistician::handleRequest(string p){
    if(p == "prepare")
    {
        this->prepareForRace();

        if(get<2>(team->getUpcomingRaces())!= nullptr)
        {
            (team->getRegisteredAt())->equipRace(get<2>(team->getUpcomingRaces()),team->getTeamEquipment());
        }
        if(get<1>(team->getUpcomingRaces())!= nullptr)
        {
            // DECIDE ON TIRES
        }
        if(get<0>(team->getUpcomingRaces())!= nullptr)
        {
            team->getRegisteredAt()->goToRace(this);
        }

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

 