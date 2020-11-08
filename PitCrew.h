//
// Created by Joanita on 2020/10/28.
//

/**
 * @class PitCrew
 * @brief concrete product of the abstract factory pattern. Inherits from Personnel
 * @author Joanita Nell (u19006812) 
 * **/

#ifndef PROJECT_PITCREW_H
#define PROJECT_PITCREW_H

#include "Personnel.h"

class PitCrew: public Personnel{
public:
    void handleRequest(string s);
    void changeTyre();
//    PitCrew();
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    PitCrew(Team* team, Human * s,TeamResources* tR);
};

#endif //PROJECT_PITCREW_H
