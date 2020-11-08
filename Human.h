/**
 * @class Human
 * @brief Abstract product of the Abstract Factory design pattern.
 * @author Joanita Nell (u19006812)
 * **/

#ifndef PROJECT_HUMAN_H
#define PROJECT_HUMAN_H

// #include "Team.h"
#include <iostream>
#include <string>
#include "TeamResources.h"
//#include "Team.h"
using namespace std;

class Team; 
class Human{
protected:
    Team* team;
    Human* successor;
    string typeHuman; //vir Janlu
    TeamResources* teamResources;
public:
/**
 * @brief paramaterized constructor, sets the values of the attributes.
 * @param team links the team that the human belongs to.
 * @param s sets the successor of the human, used in chain of responsibility.
 * @param tR lins the teamResources to the human.
 * **/
    Human(Team* team, Human * s,TeamResources* tR);
/**
 * @brief Uses a virstual destructor to ensure the subclasses are also properly destructed.
 * **/
    virtual ~Human();
    /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
     * * @param s enables the program to know what comman to execute.
* **/
    virtual void handleRequest(string s);
    /**
     * @brief accessor method for the successor attribute
     * **/
    Human* getSuccesor();   //vir Janlu

    /**
     * @brief accessor method for the typeHuman attribute
     * **/
    string getTypeHuman();  //vir Janlu
};

#endif //PROJECT_HUMAN_H
