#include "EngineEngineer.h"
#include "Team.cpp"

 EngineEngineer::EngineEngineer():Engineering(){
     typeHuman="EngineEngineer";
 }

 EngineEngineer::EngineEngineer(Team* team, Human * s): Engineering(team, s){
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
    cout<<"The "<<team->getCompany()<<" team's engine engineer is using the wrench."<<endl;
 }