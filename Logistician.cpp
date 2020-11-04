#include "Logistician.h"
//#include "Team.cpp"
#include "Race.cpp"

Logistician::Logistician(Team* t, Human * s,TeamResources* tR): Personnel(t, s,tR){
    typeHuman="Logistician";
}

void Logistician::handleRequest(string p){
    if(p == "prepare")
    {

        if(get<2>(teamResources->getUpcomingRaces())!= nullptr)
        {
            if (!get<2>(teamResources->getUpcomingRaces())->getTrack()->isEuropean())
                shipContainerNonEuropean();
        }
        if(get<1>(teamResources->getUpcomingRaces())!= nullptr)
        {
            orderTyres();
        }
        if(get<0>(teamResources->getUpcomingRaces())!= nullptr)
        {
            this->prepareForRace();
            travelToRace();
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
    cout<<"The "<<team->getCompany()<<" team logistician prepares for the race";
    if (get<0>(teamResources->getUpcomingRaces())->getTrack()->isEuropean())
    {
        cout<<"and transports all the equipment to the European track ";
        shipContainerEuropean();
    }
    cout<<endl;
}

void Logistician::travelToRace()
{
    cout<<"The "<<team->getCompany()<<" team logistician aranges transport for the team and they travel to the race"<<endl;
//    this->team->getRegisteredAt()->goToRace(team);

}
void Logistician::orderTyres()
{
    cout<<"The "<<team->getCompany()<<" team logistician orders tyres for the race taking place in one months time , as specified by engineers and strategist"<<endl;
    // need some fucntion here
}

void Logistician::shipContainerNonEuropean()
{

    equipRace(get<2>(teamResources->getUpcomingRaces()),teamResources->getTeamEquipment());

}
void Logistician::shipContainerEuropean()
{
    equipRace(get<0>(teamResources->getUpcomingRaces()),teamResources->getTeamEquipment());

}

void Logistician::goToRace(Team *t)
{
    get<2>(teamResources->getUpcomingRaces())->addTeam(t);

}

void Logistician::equipRace(Race *race, Equipment *equipment)
{
    race->storeEquipment(equipment);
}

void Logistician::update() {

}
