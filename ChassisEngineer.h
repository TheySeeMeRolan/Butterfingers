//
// Created by Joanita on 2020/10/28.
//
/**
 * @class ChassisEngineer
 * @brief concrete product of the abstract factory pattern. Inherits from Enginnering
 * @author Joanita Nell (u19006812) 
 * **/



#ifndef PROJECT_CHASISENGINEER_H
#define PROJECT_CHASISENGINEER_H

#include "Engineering.h"

class ChassisEngineer: public Engineering{
public:
    void handleRequest(string s);
    void test();
//    ChasisEngineer();
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    ChassisEngineer(Team* team, Human * s,TeamResources* tR);
};

#endif //PROJECT_CHASISENGINEER_H
