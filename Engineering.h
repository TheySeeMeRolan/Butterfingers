
/**
 * @class Engineering
 * @brief Concrete product in the Abstract Factory design pattern, inherits from Human.
 * @author Joanita Nell (u19006812)
 * **/


#ifndef PROJECT_ENGINEERING_H
#define PROJECT_ENGINEERING_H

#include "Human.h"

class Engineering: public Human{
public:
 /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
     * * @param s enables the program to know what comman to execute.
* **/
    virtual void handleRequest(string p);
//    Engineering();
/**
 * @brief paramaterized constructor. instantiate derived class from the parent class
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    Engineering(Team* team, Human * s,TeamResources* tR);
};
#endif //PROJECT_ENGINEERING_H
