#ifndef PROJECT_WINDTUNNEL_H
#define PROJECT_WINDTUNNEL_H

#include "Test.h"
#include <iostream>

class WindTunnel: public Test{
public:
    WindTunnel(TeamResources*, Hangar*);
    // primitive functions
    virtual bool run();
    virtual bool load();
    virtual void undo();
};

#endif //PROJECT_WINDTUNNEL_H
