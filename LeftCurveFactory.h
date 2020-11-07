/**
 * @class LeftCurveFactory
 * @brief Concrete factory participant 
 * 
 * The concrete participant ConcreteFactory of Factory design pattern. 
 * Implements the virtual functions defined in the base class.
 * 
 * @author Luke Partridge u19010240
 * 
 */
#ifndef PROJECT_LEFTCURVEFACTORY_H
#define PROJECT_LEFTCURVEFACTORY_H

#include "TrackPartFactory.h"
#include "LeftCurvePart.h"

class LeftCurveFactory: public TrackPartFactory {
public:
    /**
     * @brief create track parts (parameterized)
     * Implementation of creating the LeftCurve trackParts with parameterized values.
     * @param length int of part length
     * @param difficulty int of part difficulty
     */
    TrackPart* createPart(int l, int d);
    /**
     * @brief create track parts
     * The implementation to create LeftCurve trackParts with random values for length and difficulty.
     */
    TrackPart* createPart();
    /**
     * @brief destructor
     * The concrete destructor that ensure this derived class is destroyed before the base class TrackPartFactory
    */
    ~LeftCurveFactory();
};


#endif //PROJECT_LEFTCURVEFACTORY_H
