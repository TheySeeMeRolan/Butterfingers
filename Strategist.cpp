#include "Strategist.h"
//#include "Team.cpp"

Strategist::Strategist(Team* t, Human * s,TeamResources* tR): Personnel(t, s,tR){
    typeHuman="Strategist";
}

void Strategist::handleRequest(string p){

    if(p == "prepare")
    {

    }

    if(p == "test simulation")
    {

    }

    if(p == "test windtunnel")
    {

    }

    if(p == "strategise")
    {
        Race* race1Month= nullptr;
        if (teamResources->getCurrentWeek()<=40 )
        {
            race1Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 4);
        }
        if(race1Month!= nullptr ) //&& !race1Month->getTrack()->isEuropean()
        {
            this->strategise();
        }
    }

    if(p == "service")
    {

    }

    if(p == "racing")
    {

    }

    // send it along the line
    if (successor)
    {
        successor->handleRequest(p);
    }

}

void Strategist::strategise(){
    cout<<left << setw(75)<<"The "+ teamResources->getCompany()+" teams STRATEGIST formulates it choice of tyre : ";

    int chosenTyre= rand() % 3 ;
    vector<int> tyres = teamResources->getTyresToOrder();
    tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
    teamResources->setTyresToOrder(tyres);
    if (chosenTyre==0)
        cout<<"soft "<<endl;
    if (chosenTyre==1)
        cout<<"medium "<<endl;
    if (chosenTyre==2)
        cout<<"hard "<<endl;
}