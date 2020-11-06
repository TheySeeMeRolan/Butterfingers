#ifndef PROJECT_WINDTUNNEL_H
#define PROJECT_WINDTUNNEL_H

#include "Test.h"
#include <iostream>

class WindTunnel: public Test{
public:
    virtual bool run();
    virtual bool load();
    virtual void save();
    WindTunnel(TeamResources*, Hangar*);
};

#endif //PROJECT_WINDTUNNEL_H
