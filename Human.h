#ifndef PROJECT_HUMAN_H
#define PROJECT_HUMAN_H

// #include "Team.h"
#include <iostream>
#include <string>
//#include "Team.h"
using namespace std;

class Team; 
class Human{
protected:
    Team* team;
    Human* successor;
    string typeHuman; //vir Janlu
public:
    Human(Team* team, Human * s);
    virtual ~Human();
    virtual void handleRequest(string s);
    Human* getSuccesor();   //vir Janlu
    string getTypeHuman();  //vir Janlu
};

#endif //PROJECT_HUMAN_H
