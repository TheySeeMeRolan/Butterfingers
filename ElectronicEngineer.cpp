#include "ElectronicEngineer.h"
//#include "Team.cpp"

ElectronicEngineer::ElectronicEngineer(Team* t, Human * s,TeamResources* tR) : Engineering(t, s,tR){
    typeHuman="ElectronicEngineer";
}


void ElectronicEngineer::handleRequest(string p){
    if(p == "prepare"){
        tinker();
    }

    if(p == "test simulation"){

    }

    if(p == "test windtunnel"){

    }

    if(p == "strategise")
    {
        Race* race1Month= nullptr;
        if (teamResources->getCurrentWeek()<=39 )
        {
            race1Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 4);
        }
        if(race1Month!= nullptr ) //&& !race1Month->getTrack()->isEuropean()
        {
            cout<<"The "<<teamResources->getCompany()<<" teams aerodynamics engineer formulates it choice of tyre"<<endl;

            int chosenTyre= rand() % 3 ;
            vector<int> tyres = teamResources->getTyresToOrder();
            tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
            teamResources->setTyresToOrder(tyres);
        }

    }

    if(p == "service"){
        tinker();
    }

    if(p == "racing"){

    }

    if (successor) {
        successor->handleRequest(p);
    }
}

void ElectronicEngineer::tinker(){
    cout<<"The "<<teamResources->getCompany()<<" team's electronic engineer is fiddling with the electronics."<<endl;
}