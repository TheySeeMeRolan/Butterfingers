#include"AerodynamicsEngineer.h"
#include "Team.cpp"

AerodynamicsEngineer::AerodynamicsEngineer(Team* team, Human * s): Engineering(team, s){
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
    cout<<"The "<<team->getCompany()<<" team's aerodynamic engineer is changing the shape of the formula one racing car"<<endl;
}