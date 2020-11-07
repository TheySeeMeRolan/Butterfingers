#include "Simulation.h"


bool Simulation::load(){

    cout<<"LOAD SIMULATION FOR "<<teamResources->getCompany()<<" TEAM."<<endl;

    cout<<"STATS BEFORE TEST:"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    cout<<"Engine:"<<endl;

    cout<<"Horse Power - "<<teamResources->getEngine()->getHorsePower()<<" hp"<<endl;
    cout<<"Torque - "<<teamResources->getEngine()->getTorque()<<" N.m"<<endl<<endl;

    cout<<"Electronics:"<<endl;
    cout<<"Spoiler Weight - "<<teamResources->getElectronics()->getAssistance()<<" pts"<<endl;
    cout<<"Chasis Height - "<<teamResources->getElectronics()->getEfficiency()<<" pts"<<endl<<endl;

    return true;
}

bool Simulation::run(){
    cout<<"RUNNING SIMULATON TEST"<<endl;
    cout<<"-----------------------"<<endl<<endl;

    hangar->storeMemento(teamResources->createMemento(true)); // store memento of current car before changing it with construct

    Formula1Car * before = teamResources->getCar(true); // get current car
    int var1 = before->getEngine()->getHorsePower();
    int var2 = before->getEngine()->getTorque();
    int var3 = before->getElectronics()->getAssistance();
    int var4 = before->getElectronics()->getEfficiency();

    int result1 = var1 + var2 + var3 + var4;

    teamResources->construct(); // recreate the current car

    Formula1Car * test = teamResources->getCar(true); // get current car
    var1 = before->getEngine()->getHorsePower();
    var2 = before->getEngine()->getTorque();
    var3 = before->getElectronics()->getAssistance();
    var4 = before->getElectronics()->getEfficiency();

    int result2 = var1 + var2 + var3 + var4;

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