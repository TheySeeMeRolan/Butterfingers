#include "EngineEngineer.h"
//#include "Team.cpp"

EngineEngineer::EngineEngineer(Team* team, Human * s,TeamResources* tR): Engineering(team, s, tR){
    typeHuman="EngineEngineer";
}

void EngineEngineer::handleRequest(string p){

    if(p == "prepare"){

    }

    if(p == "test simulation")
    {
        cout<<"The "<<teamResources->getCompany()<<" team's engine engineer is testing out ENGINE changes."<<endl;
    }

    if(p == "test windtunnel"){
        cout<<"The "<<teamResources->getCompany()<<" team's engine engineer is testing out ENGINE changes."<<endl;

    }

    if(p == "strategise"){

        Race* race1Month= nullptr;
        if (teamResources->getCurrentWeek()<=40 )
        {
            race1Month = teamResources->getRaceSchedule().at(teamResources->getCurrentWeek() + 4);
        }
        if(race1Month!= nullptr ) //&& !race1Month->getTrack()->isEuropean()
        {
            cout<<left << setw(75)<<"The "+ teamResources->getCompany()+" teams ENGINE ENGINEER formulates it choice of tyre : ";

            int chosenTyre= rand() % 3 ;
            vector<int> tyres = teamResources->getTyresToOrder();
            tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
            teamResources->setTyresToOrder(tyres);
            if (chosenTyre==0)
                cout<<"soft "<<endl;
            else if (chosenTyre==1)
                cout<<"medium "<<endl;
            else if (chosenTyre==2)
                cout<<"hard "<<endl;
        }


    }

    if(p == "service"){
        useWrench();
    }

    if(p == "racing"){

    }

    if (successor) {
        successor->handleRequest(p);
    }
}


void EngineEngineer::useWrench(){
    cout<<"The "<<teamResources->getCompany()<<" team's ENGINE ENGINEER services the cars"<<endl;
}
