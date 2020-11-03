#include "ElectronicEngineer.h"
#include "Team.cpp"

//ElectronicEngineer::ElectronicEngineer(): Engineering(){
//
//}

ElectronicEngineer::ElectronicEngineer(Team* t, Human * s) : Engineering(t, s){

}


void ElectronicEngineer::handleRequest(string p){
    if(p == "prepare"){
        tinker();
    }
    
    if(p == "test simulation"){
        
    }
    
    if(p == "test windtunnel"){

    }
    
    if(p == "strategise"){
        
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
    cout<<"The "<<team->getCompany()<<" team's electronic engineer is fiddling with the electronics."<<endl;
}