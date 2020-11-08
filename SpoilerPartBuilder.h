/**
 * @class SpoilerPartBuilder
 * @brief concrete class.
 * 
 * A concrete builder for the builder design pattern. 
 * Implements the methods defined in the abstract interface class.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_SPOILERPARTBUILDER_H
#define PROJECT_SPOILERPARTBUILDER_H

#include "Spoiler.h"
#include "CarPartBuilder.h"

class SpoilerPartBuilder: public CarPartBuilder{
private:
    Spoiler* spoilerPart;///< The spoiler part.
public:
    /**
     * @brief create car part.
     * The implementation for building the spoiler car part.
     */
    void buildPart();
    /**
     * @brief return car part.
     * The implementation for returning the spoiler car part.
     */
    CarPart* getPart();
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class CarPartBuilder.
    */
    ~SpoilerPartBuilder();
};

#endif //PROJECT_SPOILERPARTBUILDER_H
