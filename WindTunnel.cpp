#include "WindTunnel.h"

// windtunnel tests the spoiler and the chassis changing the variables of the

bool WindTunnel::load(){

    cout<<endl<<"                   >>> LOAD WIND TUNNEL FOR "<<teamResources->getCompany()<<" TEAM <<<"<<endl;

    int tokensUsed =  (rand() % 30) + 1;
    int currentTokens = teamResources->getWindTunnelTokens();
    teamResources->setWindTunnelTokens(currentTokens+tokensUsed);
    int result = false;
    if(teamResources->getWindTunnelTokens() <=400)
    {
        result = true;
    }

    cout<<"Tokens used in this test: "<<tokensUsed<<endl;
    cout<<"Total Tokens used: "<<teamResources->getWindTunnelTokens()<<endl<<endl;



    return result;
}

bool WindTunnel::run(){
    cout<<"-----------------------RUNNING WIND TUNNEL TEST-----------------------"<<endl<<endl;
    // get car from the wind tests hangar
    // teamResources->reinstantiateMemento(); // create memento of the current car

    hangar->storeMemento(teamResources->createMemento(true)); // store memento of current car
    // the mememto gets replaced if the car generated is better than the car stored in the memento

    Formula1Car * before = teamResources->getCar(true); // get current car
    int var1 = before->getchassis()->getAerodynamicsScore();
    int var2 = before->getSpoiler()->getAerodynamicsScore();
    int result1 = var1 + var2;
    int originalVar1=var1;
    int originalVar2=var2;
    int originalWeight=before->getSpoiler()->getWeight();
    int originaHeight=before->getchassis()->getHeight();
    teamResources->construct(); // recreate the current car

    Formula1Car * test = teamResources->getCar(true); // get current car
    var1 = test->getchassis()->getAerodynamicsScore();
    var2 = test->getSpoiler()->getAerodynamicsScore();
    int result2 = var1 + var2;
    cout<<setw(12)<<""<<"===STATS BEFORE TEST vs STATS DURING TEST==="<<endl;    cout<<"Aerodynamics Score:"<<endl;
    cout<<setw(18)<<"Spoiler - "+to_string(originalVar2)+" pts"<<"vs "<<to_string(var2)+" pts"<<endl;
    cout<<setw(18)<<"Chassis - "+to_string(originalVar1)+" pts"<<"vs "<<to_string(var1)+" pts"<<endl<<endl;

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

void WindTunnel::undo(){
    cout<<"RETRIEVE CAR FROM HANGAR AFTER WIND TUNNEL TEST"<<endl;
    Test::undo();

    // teamResources->reinstantiateMemento(teamResources->createMemento(true), true); // create memento of current car
}


WindTunnel::WindTunnel(TeamResources*t, Hangar*h) : Test(t, h){}