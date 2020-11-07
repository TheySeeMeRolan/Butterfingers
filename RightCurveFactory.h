/**
 * @class RightCurveFactory
 * @brief Concrete factory participant 
 * 
 * The concrete participant ConcreteFactory of Factory design pattern. 
 * Implements the virtual functions defined in the base class.
 * 
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_RIGHTCURVEFACTORY_H
#define PROJECT_RIGHTCURVEFACTORY_H

#include "TrackPartFactory.h"
#include "RightCurvePart.h"

class RightCurveFactory: public TrackPartFactory {
public:
    /**
     * @brief create track parts (parameterized)
     * Implementation of creating the RightCurve trackParts with parameterized values.
     * @param length int of part length
     * @param difficulty int of part difficulty
     */
    TrackPart* createPart(int l, int d);
    /**
     * @brief create track parts
     * The implementation to create RightCurve trackParts with random values for length and difficulty.
     */
    TrackPart* createPart();
    ~RightCurveFactory();
};


#endif //PROJECT_RIGHTCURVEFACTORY_H
