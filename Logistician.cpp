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



        if (teamResources->getCurrentWeek()<32 )
        {
            cout<<teamResources->getCurrentWeek() + 2<<endl;

            race3Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 12);
        }


        if(teamResources->getCurrentWeek()<=32 && race3Month!= nullptr)
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
    if(p == "orderTyres")
    {

        Race* race1Month= nullptr;
        if (teamResources->getCurrentWeek()<=40)
        {
            race1Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 4);
        }
        if(race1Month!= nullptr ) //&& !race1Month->getTrack()->isEuropean()
        {
            orderTyres();
        }

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
void Logistician::orderTyres()
{


    cout<<"The "<<teamResources->getCompany()<<" teams logistician orders for the tyres for the race occurring in 1 month"<<endl;
    teamResources->getRaceSchedule().at(teamResources->getCurrentWeek()+4)->shipTyres(teamResources->getTyresToOrder());
    cout<<"Tyres ordered: soft - "<<teamResources->getTyresToOrder().at(0)<< " medium - "<<teamResources->getTyresToOrder().at(1)<< " hard - "<<teamResources->getTyresToOrder().at(2)<<endl;

    vector<int> resetTyres = {0,0,0};
    teamResources->setTyresToOrder(resetTyres);
}