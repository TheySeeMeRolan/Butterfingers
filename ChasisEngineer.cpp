#include "ChasisEngineer.h"
//#include "Team.cpp"

ChasisEngineer::ChasisEngineer(Team* t, Human * s,TeamResources* tR):Engineering(t, s,tR){
    typeHuman="ChasisEngineer";
}

void ChasisEngineer::handleRequest(string p){

    if(p == "prepare"){

    }

    if(p == "test simulation"){
        test();
    }

    if(p == "test windtunnel"){
        test();
    }

    if(p == "service"){

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
            cout<<"The "<<teamResources->getCompany()<<" teams aerodynamics engineer formulates it choice of tyre"<<endl;

            int chosenTyre= rand() % 3 ;
            vector<int> tyres = teamResources->getTyresToOrder();
            tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
            teamResources->setTyresToOrder(tyres);
        }

    }

    if(p == "racing"){

    }

    if (successor) {
        successor->handleRequest(p);
    }
}

void ChasisEngineer::test(){
//    cout<<"The "<<team->getCompany()<<" team's chassis engineer is testing."<<endl;
}