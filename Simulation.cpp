#include "Simulation.h"


bool Simulation::load(){


    cout<<endl<<setw(24)<<""<<"SIMULATION LOADED"<<endl;


    return true;
}

bool Simulation::run(){
    cout<<setw(21)<<""<<"STARTING SIMULATON TEST"<<endl;
    cout<<setw(21)<<""<<"-----------------------"<<endl<<endl;

    hangar->storeMemento(teamResources->createMemento(true)); // store memento of current car before changing it with construct

    Formula1Car * before = teamResources->getCar(true); // get current car
    int var1 = before->getEngine()->getHorsePower();
    int var2 = before->getEngine()->getTorque();
    int var3 = before->getElectronics()->getAssistance();
    int var4 = before->getElectronics()->getEfficiency();

    int OriginalHP = var1;
    int OriginalT  = var2;
    int OriginalA   = var3;
    int OriginalE   =var4;

    int result1 = var1 + var2 + var3 + var4;

    teamResources->construct(); // recreate the current car

    Formula1Car * test = teamResources->getCar(true); // get current car
    var1 = test->getEngine()->getHorsePower();
    var2 = test->getEngine()->getTorque();
    var3 = test->getElectronics()->getAssistance();
    var4 = test->getElectronics()->getEfficiency();

    int result2 = var1 + var2 + var3 + var4;


    cout<<setw(12)<<""<<"===STATS BEFORE TEST vs STATS DURING TEST==="<<endl;
    cout<<"Engine:"<<endl;
    cout<<setw(18)<<"Horse Power - "+to_string(OriginalHP)+" hp"<<"vs "<<to_string(var1)+" hp"<<endl;
    cout<<setw(18)<<"Torque      - "+to_string(OriginalT)+" N.m"<<"vs "<<to_string(var2)+" N.m"<<endl<<endl;

    cout<<"Electronics:"<<endl;
    cout<<setw(18)<<"Spoiler Assistance - "+to_string(OriginalA)+" pts"<<"vs "<<to_string(var3)+" pts"<<endl;
    cout<<setw(18)<<"Chassis Efficiency - "+to_string(OriginalE)+" pts"<<"vs "<<to_string(var4)+" pts"<<endl<<endl;



    cout<<setw(24)<<""<<"-------RESULTS:-------"<<endl;

    cout<<"Score Before Test: "<<result1<<endl;
    cout<<"Score After Test:  "<<result2<<endl;

    if(result1 < result2)
    {
        // the new car will stay the same
        return true; // the new aerodynamics score is better
    }else
    {
        return false;
    }
}

void Simulation::undo(){
    cout<<"RETRIEVE CAR FROM HANGAR AFTER SIMULATION TEST"<<endl;
    Test::undo(); // resintstates
}

Simulation::Simulation(TeamResources*t, Hangar *h) : Test(t,h){

}