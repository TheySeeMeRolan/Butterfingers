#include "Logistician.h"
#include "Race.h"
Logistician::Logistician(Team* t, Human * s,TeamResources* tR): Personnel(t, s,tR){
    typeHuman="Logistician";
}

void Logistician::handleRequest(string p){
    if(p == "prepare")
    {
        Race* raceThisWeek = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek());
        Race* race1Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek()+4);
        Race* race3Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek()+12);

        if(race3Month!= nullptr)
        {
            if (!race3Month->getTrack()->isEuropean())
                shipContainerNonEuropean();
        }
        if(race1Month!= nullptr && !race1Month->getTrack()->isEuropean())
        {
            orderTyres();
        }
        if(raceThisWeek != nullptr)
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
//        std::cout<<"Servicing\n";
    }
    
    if(p == "racing")
    {
//        this->analyseTrack();
    }

    if (successor) 
    {
        successor->handleRequest(p);
    }
}

void Logistician::analyseTrack(){
    cout<<"The "<<teamResources->getCompany()<<" team logistician analyses the track"<<endl;
}

void Logistician::prepareForRace(){
    cout<<"The "<<teamResources->getCompany()<<" team logistician prepares everything for the race weekend";
    if (teamResources->getRaceSchedule().at(teamResources->getCurrentWeek())->getTrack()->isEuropean())
    {
        cout<<"and transports all the equipment to the European track ";
        shipContainerEuropean();
    }
    cout<<endl;
}

void Logistician::travelToRace()
{
    cout<<"The "<<teamResources->getCompany()<<" team logistician aranges transport for the team and they travel to the race"<<endl;
    teamResources->getRaceSchedule().at(teamResources->getCurrentWeek())->addTeam(this->team);

}
void Logistician::orderTyres()
{
    cout<<"The "<<teamResources->getCompany()<<" team logistician orders tyres for the race taking place in one months time , as specified by engineers and strategist"<<endl;
    // need some fucntion here
}

void Logistician::shipContainerNonEuropean()
{

    equipRace(teamResources->getRaceSchedule().at(teamResources->getCurrentWeek()+12), teamResources->getTeamEquipment());

}
void Logistician::shipContainerEuropean()
{
    equipRace(teamResources->getRaceSchedule().at(teamResources->getCurrentWeek()), teamResources->getTeamEquipment());

}

void Logistician::equipRace(Race *race, Equipment *equipment)
{
    race->storeEquipment(equipment);
}
