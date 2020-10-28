//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_DRIVER_H
#define PROJECT_DRIVER_H
#include "Personnel.h"

class Driver: public Personnel{
private:
    int luck;
    int skill;
public:
    void handleRequest();
    void Drive();
    Driver();
    Driver(Team* team);
    Driver(Team* team, int l, int s);
};

#endif //PROJECT_DRIVER_H
