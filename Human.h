//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_HUMAN_H
#define PROJECT_HUMAN_H

#include "Team.h"

class Human{
private:
    Team* team;
    Human* successor;
public:
    virtual handleRequest();
    Human();
    Human(Team* team);
    virtual ~Human();
};

#endif //PROJECT_HUMAN_H
