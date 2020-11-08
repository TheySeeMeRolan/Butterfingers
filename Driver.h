//
// Created by Joanita on 2020/10/28.
//

/**
 * @class Driver
 * @brief concrete product of the abstract factory pattern. Inherits from Personnel
 * @author Joanita Nell (u19006812) 
 * **/

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
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    Driver(Team* team, Human* human, int l, int s,TeamResources* tR);
    int getSkill();
    int getLuck();
//    Driver(Team* team, int l, int s);
};

#endif //PROJECT_DRIVER_H
