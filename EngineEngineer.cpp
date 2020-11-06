#include "EngineEngineer.h"
//#include "Team.cpp"

 EngineEngineer::EngineEngineer(Team* team, Human * s,TeamResources* tR): Engineering(team, s, tR){
     typeHuman="EngineEngineer";
 }

 void EngineEngineer::handleRequest(string p){
    
    if(p == "prepare"){
         
    }
    
    if(p == "test simulation"){

    }
    
    if(p == "test windtunnel"){

    }
    
    if(p == "strategise"){
        cout<<"The "<<teamResources->getCompany()<<" teams engine engineer formulates it choice of tyre"<<endl;

        int chosenTyre= rand() % 2 ;
        vector<int> tyres = teamResources->getTyresToOrder();
        tyres.at(chosenTyre) = tyres.at(chosenTyre) + 1 ;
        teamResources->setTyresToOrder(tyres);
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
   cout<<"The "<<teamResources->getCompany()<<" team's engine engineer is using the wrench."<<endl;
 }