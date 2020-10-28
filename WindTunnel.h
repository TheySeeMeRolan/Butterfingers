//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_WINDTUNNEL_H
#define PROJECT_WINDTUNNEL_H

#include "Test.h"

class WindTunnel: public Test{
public:
    virtual void run();
    virtual void load();
    virtual void save();
    WindTunnel();
};

#endif //PROJECT_WINDTUNNEL_H
