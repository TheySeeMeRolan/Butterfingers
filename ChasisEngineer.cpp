#include "ChasisEngineer.h"

ChasisEngineer::ChasisEngineer(): Engineering(){

}

ChasisEngineer::ChasisEngineer(Team* t, Human * s):Engineering(t, s){
    
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

void ChasisEngineer::test(){
    cout<<"The "<<team->getCompany()<<" team's chassis engineer is testing."<<endl;
}