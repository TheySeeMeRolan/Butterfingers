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
 /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
* **/
    void handleRequest(string s);
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void drive();
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    Driver(Team* team, Human* human, int l, int s,TeamResources* tR);
    /**
     * @brief accessor method for skill attribute
     * **/
    int getSkill();
    /***
     * @brief accessor methof for luck attribute
     * **/
    int getLuck();
//    Driver(Team* team, int l, int s);
};

#endif //PROJECT_DRIVER_H
