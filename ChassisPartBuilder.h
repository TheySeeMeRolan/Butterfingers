/**
 * @class ChassisPartBuilder
 * @brief concrete class.
 * 
 * A concrete builder for the builder design pattern. 
 * Implements the methods defined in the abstract interface class.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_CHASISPARTBUILDER_H
#define PROJECT_CHASISPARTBUILDER_H

#include "Chassis.h"
#include "CarPartBuilder.h"

class ChassisPartBuilder: public CarPartBuilder{
private:
    Chassis* chasisPart; ///< The chasis part.
public:
    /**
     * @brief create car part.
     * The implementation for building the chasis car part.
     */
    void buildPart();
    /**
     * @brief return car part.
     * The implementation for returning the chasis car part.
     */
    CarPart* getPart();
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class CarPartBuilder.
    */
    ~ChassisPartBuilder();
};

#endif //PROJECT_CHASISPARTBUILDER_H
