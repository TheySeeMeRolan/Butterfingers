#include"AerodynamicsEngineer.h"
//#include "Team.cpp"

AerodynamicsEngineer::AerodynamicsEngineer(Team* team, Human * s,TeamResources* tR): Engineering(team, s,tR){
    typeHuman="AerodynamicsEngineer";
}

void AerodynamicsEngineer::handleRequest(string p){
    if(p == "prepare"){

    }

    if(p == "test simulation"){

    }

    if(p == "test windtunnel"){
        changeShape();
    }

    if(p == "strategise"){
        Race* race1Month= nullptr;
        if (teamResources->getCurrentWeek()<=40 )
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

    }

    if(p == "racing"){

    }

    if (successor) {
        successor->handleRequest(p);
    }
}

void AerodynamicsEngineer::changeShape(){
    cout<<"The "<<teamResources->getCompany()<<" team's aerodynamic engineer is changing the shape of the formula one racing car"<<endl;
}