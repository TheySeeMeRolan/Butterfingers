//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_DRIVER_H
#define PROJECT_DRIVER_H
//#include "Human.h"
#include "Personnel.h"

class Driver: public Personnel{
private:
    int luck;
    int skill;
public:
    void handleRequest(string s);
    void drive();
//    Driver();
//    Driver(Team* team, Human* human);
    Driver(Team* team, Human* human, int l, int s);
    int getSkill();
    int getLuck();
//    Driver(Team* team, Human * s);
//    Driver(Team* team, Human * s, int l, int s);
};

#endif //PROJECT_DRIVER_H
