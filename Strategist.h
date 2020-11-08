#ifndef PROJECT_STRATEGIST_H
#define PROJECT_STRATEGIST_H
#include "Personnel.h"

/**
 * @class Strategist
 * @brief concrete product of the abstract factory pattern. Inherits from Personnel
 * @author Joanita Nell (u19006812) 
 * **/

class Strategist: public Personnel{
public:
 /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
* **/
    void handleRequest(string s);
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void strategise();
//    Strategist();
 /**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    Strategist(Team* team, Human * s,TeamResources* tR);
};
#endif //PROJECT_STRATEGIST_H
