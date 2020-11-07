/**
 * @class EnginePartBuilder
 * @brief concrete class.
 * 
 * A concrete builder for the builder design pattern. 
 * Implements the methods defined in the abstract interface class.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_ENGINEPARTBUILDER_H
#define PROJECT_ENGINEPARTBUILDER_H

#include "Engine.h"
#include "CarPartBuilder.h"

class EnginePartBuilder: public CarPartBuilder{
private:
    Engine* enginePart;///< The engine part.
public:
    /**
     * @brief create car part.
     * The implementation for building the engine car part.
     */
    void buildPart();
    /**
     * @brief return car part.
     * The implementation for returning the engine car part.
     */
    CarPart* getPart();
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class CarPartBuilder.
    */
    ~EnginePartBuilder();
};

#endif //PROJECT_ENGINEPARTBUILDER_H
