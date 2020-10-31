#ifndef PROJECT_HUMAN_H
#define PROJECT_HUMAN_H

// #include "Team.h"
#include<iostream>
#include<string>
#include "string.h"
#include "Team.h"
using namespace std;

// class Team;
class Human{
protected:
    Team* team;
    Human* successor;
public:
    virtual void handleRequest();
    // Human();
    Human(Team* team, Human * s);
    virtual ~Human();
};

#endif //PROJECT_HUMAN_H
