

/**
 *  @class HumanFactory
 *  @brief Abstract Factory class of the Abstract factory class
 * 
 *Defines the produce functions for the concrete products to be implemented by concrete factories. 
 *  @author Joanita Nell (19006812)
 * */

#ifndef PROJECT_HUMANFACTORY_H
#define PROJECT_HUMANFACTORY_H

#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

class HumanFactory{
private:
    Team* team;
    TeamResources* teamResources;
public:
    /**
     * @brief virtual destructor, ensure the parent and the child are destructed.
     * **/
    virtual ~HumanFactory();
    /**
     * @brief paramaterized constructor.
     * Sets the Team and TeamResources private class attribute.
     * @param t sets the team attribute
     * @param tR sets the teamResources attribute.
     * **/
    HumanFactory(Team* t,TeamResources* tR);
    /**
     *@brief pure virtual produce method for the Personnel
      @param  s s is used to set the successor of the chain of responsibility design pattern
     ***/
    virtual Human* makePersonnel(Human *s)=0;
    /**
     * @brief pure virtual produce method to create the various types of engineers.
     * @param s s sets the successor of the chain of responsibility design pattern.  
     * **/
    virtual Human* makeEngineer(Human *s)=0;
    /**
     * @brief accessor method for team
     * **/
    Team* getTeam();
    /**
     * @brief accessormethod for teamResources
     * **/
    TeamResources* getTeamResources();
};
#endif //PROJECT_HUMANFACTORY_H
