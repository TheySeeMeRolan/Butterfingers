#ifndef PROJECT_SIMULATION_H
#define PROJECT_SIMULATION_H

#include "Test.h"
#include <iostream>

class Simulation: public Test{
public:
    virtual bool run();
    virtual bool load();
    virtual void save();
    Simulation(TeamResources*, Hangar*);
};

#endif //PROJECT_SIMULATION_H
