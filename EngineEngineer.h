//
// Created by Joanita on 2020/10/28.
//
/**
 * @class EngineEngineer
 * @brief concrete product of the abstract factory pattern. Inherits from Enginnering
 * @author Joanita Nell (u19006812) 
 * **/

#ifndef PROJECT_ENGINEENGINEER_H
#define PROJECT_ENGINEENGINEER_H

#include "Engineering.h"

class EngineEngineer: public Engineering{
public:
    /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
     * **/
    void handleRequest(string s);
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void useWrench();
//    EngineEngineer();
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    EngineEngineer(Team* team, Human * s,TeamResources* tR);
};

#endif //PROJECT_ENGINEENGINEER_H
