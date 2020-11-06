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

            cout<<"The "<<teamResources->getCompany()<<" teams aerodynamics engineer formulates it choice of tyre"<<endl;

            int chosenTyre= rand() % 2 ;
            vector<int> tyres = teamResources->getTyresToOrder();
            tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
            teamResources->setTyresToOrder(tyres);

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
//    teamResources->runWindTest(teamResources->getCurrentCar()); // should actually use current car from the hangar
}