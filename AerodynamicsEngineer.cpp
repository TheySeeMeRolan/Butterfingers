#include"AerodynamicsEngineer.h"
//#include "Team.cpp"

AerodynamicsEngineer::AerodynamicsEngineer(Team* team, Human * s,TeamResources* tR): Engineering(team, s,tR){
    typeHuman="AerodynamicsEngineer";
}

void AerodynamicsEngineer::handleRequest(string p){
    if(p == "prepare"){

    }

    if(p == "test simulation")
    {
        changeShape();
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
            cout<<left << setw(75)<<"The "+ teamResources->getCompany()+" teams AERODYNAMICS ENGINEERS formulates it choice of tyre : ";

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
        cout<<"The "<<teamResources->getCompany()<<" team's AERODYNAMICS ENGINEER services the cars"<<endl;

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