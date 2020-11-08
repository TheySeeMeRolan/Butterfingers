//
// Created by Joanita on 2020/10/28.
//
/**
 * @class ChassisFactory
 * @brief Concrete Factory in the abstract factory design pattern.
 * Methods are used by the Team class.
 * Class inherits from HumanFactory.
 * @author Joanita Nell (u19006812)
 * **/

#ifndef PROJECT_CHASISFACTORY_H
#define PROJECT_CHASISFACTORY_H

#include "HumanFactory.h"
#include "Strategist.h"
#include "ChassisEngineer.h"

class ChassisFactory: public HumanFactory{
public:
/**
 * @brief paramaterized constructor. Used to instantiate the derived class.
 * @param t team attribute of the parent class is set with this t.
 * @param tR teamResources attribute of the parent class is set with this tR.
 * **/
    ChassisFactory(Team* t,TeamResources* tR);
    /**
     * @brief method to create the ChasisEngineer.
     * @param s used tp set the successor of the engineer for the chain of responsibility design patern.
     * **/
    Human * makeEngineer(Human * s) ;
    /**
     * @brief method to create the Strategist of Personell.
     * @param s used tp set the successor of the personnel for the chain of responsibility design patern.
     * **/
    Human * makePersonnel(Human * s) ;
};

#endif //PROJECT_CHASISFACTORY_H
