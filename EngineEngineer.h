//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ENGINEENGINEER_H
#define PROJECT_ENGINEENGINEER_H

#include "Engineering.h"

class EngineEngineer: public Engineering{
public:
    void handleRequest(string s);
    void useWrench();
//    EngineEngineer();
    EngineEngineer(Team* team, Human * s);
};

#endif //PROJECT_ENGINEENGINEER_H
