#include "Logistician.h"
#include "Race.h"
Logistician::Logistician(Team* t, Human * s,TeamResources* tR): Personnel(t, s,tR){
    typeHuman="Logistician";
}

void Logistician::handleRequest(string p){
    if(p == "prepare")
    {
        Race* raceThisWeek = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek());

        Race* race3Month = nullptr;



        if (teamResources->getCurrentWeek()<31 )
        {
            cout<<teamResources->getCurrentWeek() + 2<<endl;

            race3Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 12);
        }


        if(teamResources->getCurrentWeek()<=31 && race3Month!= nullptr)
        {
            if (!race3Month->getTrack()->isEuropean())
                shipContainerNonEuropean();
        }
        if(raceThisWeek != nullptr)
        {
            cout<< "\U0001F3C1"<<"\U0001F3C1"<<"\U0001F3C1"<< "\U0001F3C1"<<"\U0001F3C1"<<"\U0001F3C1"<< "\U0001F3C1"<<"\U0001F3C1"<<"\U0001F3C1"
            <<" RACE " <<raceThisWeek->getLocation()<<" "
            <<"\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1""\U0001F3C1" <<endl;

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
