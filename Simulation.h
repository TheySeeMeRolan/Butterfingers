#ifndef PROJECT_SIMULATION_H
#define PROJECT_SIMULATION_H

#include "Test.h"
#include <iostream>

class Simulation: public Test{
public:
    Simulation(TeamResources*, Hangar*);
    // primitive functions
    virtual bool run();
    virtual bool load();
    virtual void undo();
};

#endif //PROJECT_SIMULATION_H
