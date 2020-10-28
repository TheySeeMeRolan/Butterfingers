//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_STRATEGIST_H
#define PROJECT_STRATEGIST_H
#include "Personnel.h"

class Strategist: public Personnel{
public:
    void handleRequest();
    void strategise();
    Strategist();
    Strategist(Team* team);
};
#endif //PROJECT_STRATEGIST_H
