

/**
 * @class AerodynamicsFactory
 * @brief Concrete Factory in the abstract factory design pattern.
 * Methods are used by the Team class.
 * Class inherits from HumanFactory.
 * @author Joanita Nell (u19006812)
 * **/

#ifndef PROJECT_AERODYNAMICSFACTORY_H
#define PROJECT_AERODYNAMICSFACTORY_H

#include "HumanFactory.h"
#include "AerodynamicsEngineer.h"
#include "Driver.h"

class AerodynamicsFactory: public HumanFactory{
public:
/**
 * @brief paramaterized constructor. Used to instantiate the derived class.
 * @param t team attribute of the parent class is set with this t.
 * @param tR teamResources attribute of the parent class is set with this tR.
 * **/
    AerodynamicsFactory(Team* t,TeamResources* tR);
    /**
     * @brief method to create the AerodynamicsEngineer.
     * @param s used tp set the successor of the engineer for the chain of responsibility design patern.
     * **/
    Human * makeEngineer(Human * s);
    
     /**
     * @brief method to create the Driver of Personell.
     * @param s used tp set the successor of the personnel for the chain of responsibility design patern.
     * **/
    Driver * makePersonnel(Human * s);
};

#endif //PROJECT_AERODYNAMICSFACTORY_H
