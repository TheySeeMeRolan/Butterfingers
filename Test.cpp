//
// Created by ro on 2020/11/04.
//

#include "Test.h"

Test::~Test() {

}

Test::Test(TeamResources * t, Hangar* h) {
    teamResources = t;
    hangar = h;
}

Formula1Car *Test::getState() {
    return nullptr;
}

bool Test::test(Formula1Car *car) {
    

    // get the car in teamResources to run simulation/wind tunnel test on its part. Parts are duplicated first then changed.
    bool viable = load(); // get the different parts and output their values before

    if(viable)
    {
        bool better = run(); // get the different parts, duplicate, and randomly generate new values which may be greater or lower
        if(better)
        {
            cout<<"The test made adjstments to the "<<teamResources->getCompany()<<"'s formula1 car and placed it in the hangar."<<endl;
            save(); // if greater then save the cloned car in the hangar
        }else
        {
            cout<<"The test on the "<<teamResources->getCompany()<<"'s did not yield a better design."<<endl;
        }
        
        return true;
    }else
    {
        cout<<"Could not run the test."<<endl;
        return false;
    }

}

bool Test::load() {

}

bool Test::run() {

}

void Test::save() {

}

// void Test::getResult(bool t) {
//     if(t)
//     {
//         
//     }else
//     {
//         
//     }
// }

