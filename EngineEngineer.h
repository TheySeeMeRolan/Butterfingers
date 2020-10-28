//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ENGINEENGINEER_H
#define PROJECT_ENGINEENGINEER_H

#include "Engineering.h"

class EngineEngineer: public Engineering{
public:
    void handleRequest();
    void useWrench();
    EngineEngineer();
    EngineEngineer(Team* team);
};

#endif //PROJECT_ENGINEENGINEER_H
