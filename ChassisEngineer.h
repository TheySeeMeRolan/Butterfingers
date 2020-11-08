//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_CHASISENGINEER_H
#define PROJECT_CHASISENGINEER_H

#include "Engineering.h"

class ChassisEngineer: public Engineering{
public:
    void handleRequest(string s);
    void test();
//    ChassisEngineer();
    ChassisEngineer(Team* team, Human * s, TeamResources* tR);
};

#endif //PROJECT_CHASISENGINEER_H
