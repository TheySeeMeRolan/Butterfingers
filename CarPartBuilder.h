/**
 * @class CarPartBuilder
 * @brief interface class.
 * 
 * An abstract interface builder participant for the builder design pattern. 
 * creates the interface for the pure virtual methods overwritten by the derived classes.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_CARPARTBUILDER_H
#define PROJECT_CARPARTBUILDER_H

#include <iostream> 
#include "CarPart.h"
using namespace std;

class CarPartBuilder{
public:
    /**
     * @brief create car part.
     * The pure virtual method to allow the concreteBuilders to create the relevant carPart.
     */
    virtual void buildPart()=0;
    /**
     * @brief return car part.
     * The pure virtual method to allow the concreteBuilders to return the relevant carPart.
     */
    virtual CarPart* getPart()=0;
    /**
     * @brief virtual destructor.
     * The virtual destructor that ensures the base class CarPartBuilder is destroyed after the derived class.
    */
    virtual ~CarPartBuilder();
};

#endif //PROJECT_CARPARTBUILDER_H
