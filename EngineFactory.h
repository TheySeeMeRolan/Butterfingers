

/**
 * @class EngineFactory
 * @brief Concrete Factory in the abstract factory design pattern.
 * Methods are used by the Team class.
 * Class inherits from HumanFactory.
 * @author Joanita Nell (u19006812)
 * **/

#ifndef PROJECT_ENGINEFACTORY_H
#define PROJECT_ENGINEFACTORY_H

#include "HumanFactory.h"
#include "EngineEngineer.h"
#include "PitCrew.h"

class EngineFactory: public HumanFactory{
public:
    /**
     * @brief paramaterized constructor. Used to instantiate the derived class.
     * @param t team attribute of the parent class is set with this t.
     * @param tR teamResources attribute of the parent class is set with this tR.
     * **/
    EngineFactory(Team* t,TeamResources* tR);
     /**
     * @brief method to create the EngineEngineer.
     * @param s used tp set the successor of the engineer for the chain of responsibility design patern.
     * **/
    Human * makeEngineer(Human *) ;
    /**
     * @brief method to create the PitCrew of Personell.
     * @param s used tp set the successor of the personnel for the chain of responsibility design patern.
     * **/
    Human * makePersonnel(Human *) ;
};

#endif //PROJECT_ENGINEFACTORY_H
