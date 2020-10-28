//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_SIMULATION_H
#define PROJECT_SIMULATION_H

#include "Test.h"

class Simulation: public Test{
public:
    virtual void run();
    virtual void load();
    virtual void save();
    Simulation();
};

#endif //PROJECT_SIMULATION_H
