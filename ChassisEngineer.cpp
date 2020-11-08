#include "ChassisEngineer.h"
//#include "Team.cpp"

ChassisEngineer::ChassisEngineer(Team* t, Human * s, TeamResources* tR): Engineering(t, s, tR){
    typeHuman="ChassisEngineer";
}

void ChassisEngineer::handleRequest(string p){



    if(p == "test simulation"){
        test();
    }

    if(p == "test windtunnel"){
        test();
    }

    if(p == "service")
    {
        cout<<"The "<<teamResources->getCompany()<<" team's CHASSIS ENGINEER services the cars."<<endl;

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
            cout<<left << setw(75)<<"The "+ teamResources->getCompany()+" teams CHASSIS ENGINEER formulates it choice of tyre : ";

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

    if (successor) {
        successor->handleRequest(p);
    }
}

void ChassisEngineer::test(){
    cout<<"The "<<teamResources->getCompany()<<" team's chassis engineer is testing out CHASSIS changes."<<endl;
}