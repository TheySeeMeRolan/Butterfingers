/**
 * @class StraightFactory
 * @brief Concrete factory participant 
 * 
 * The concrete participant ConcreteFactory of Factory design pattern. 
 * Implements the virtual functions defined in the base class.
 * 
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_STRAIGHTFACTORY_H
#define PROJECT_STRAIGHTFACTORY_H
#include "TrackPartFactory.h"
#include "StraightPart.h"

class StraightFactory: public TrackPartFactory{
public:
    /**
     * @brief create track parts (parameterized)
     * Implementation of creating the Straight trackParts with parameterized values.
     * @param length int of part length
     * @param difficulty int of part difficulty
     */
   TrackPart* createPart(int l, int d);
    /**
     * @brief create track parts
     * The implementation to create Straight trackParts with random values for length and difficulty.
     */
   TrackPart* createPart();
    /**
     * @brief destructor
     * The concrete destructor that ensure this derived class is destroyed before the base class TrackPartFactory
    */
   ~StraightFactory();
};

#endif //PROJECT_STRAIGHTFACTORY_H
