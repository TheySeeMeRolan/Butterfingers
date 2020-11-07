/**
 * @class TrackPartFactory
 * @brief Abstract interface participant.
 * 
 * The abstract interface participant Factory of Factory design pattern. 
 * Holds pure virtual functions for the concreteFactories.
 * As well as the virtual destructor.
 * 
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_TRACKPARTFACTORY_H
#define PROJECT_TRACKPARTFACTORY_H
#include "TrackPart.h"

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class TrackPartFactory {
public:
    /**
     * @brief create track parts (parameterized).
     * The pure virtual method to allow the concreteFactories to create trackParts.
     * @param length int of part length.
     * @param difficulty int of part difficulty.
     */
    virtual TrackPart* createPart(int l, int d)=0;
    /**
     * @brief create track parts.
     * The pure virtual method to allow the concreteFactories to create trackParts with random values for length and difficulty.
     */
    virtual TrackPart* createPart()=0;
    /**
     * @brief virtual destructor.
     * The virtual destructor that ensures the base class TrackPartFactory is destroyed after the derived class.
    */
    virtual ~TrackPartFactory();
};


#endif //PROJECT_TRACKPARTFACTORY_H
