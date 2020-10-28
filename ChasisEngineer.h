//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_CHASISENGINEER_H
#define PROJECT_CHASISENGINEER_H

#include "Engineering.h"

class ChasisEngineer: public Engineering{
public:
    void handleRequest();
    void test();
    ChasisEngineer();
    ChasisEngineer(Team* team);
};

#endif //PROJECT_CHASISENGINEER_H
