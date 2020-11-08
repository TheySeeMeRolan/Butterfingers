//
// Created by Joanita on 2020/10/28.
//

/**
 * @class ElectronicEngineer
 * @brief concrete product of the abstract factory pattern. Inherits from Enginnering
 * @author Joanita Nell (u19006812) 
 * **/

#ifndef PROJECT_ELECTRONIC_H
#define PROJECT_ELECTRONIC_H

#include "Engineering.h"

class ElectronicEngineer: public Engineering{
public:
    void handleRequest(string s);
    void tinker();
//    ElectronicEngineer();
/**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    ElectronicEngineer(Team* team, Human * s,TeamResources* tR);
};


#endif //PROJECT_ELECTRONIC_H
