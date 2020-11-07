#ifndef PROJECT_TEST_H
#define PROJECT_TEST_H



#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#include "Formula1Car.h"
#include "TeamResources.h"
#include "Hangar.h"

// class TeamResources;

class Test{

protected:
    TeamResources* teamResources;
    Hangar * hangar;
public:
    virtual ~Test();
    Test(TeamResources * t, Hangar*);
    Formula1Car* getState();
    bool test(Formula1Car* car);
    // primitive functions
    virtual bool load();
    virtual bool run();
    virtual void undo();
};

#endif //PROJECT_TEST_H