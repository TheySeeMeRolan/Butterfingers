/**
 * @class ChasisPartBuilder
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

#include "Chasis.h"
#include "CarPartBuilder.h"

class ChasisPartBuilder: public CarPartBuilder{
private:
    Chasis* chasisPart; ///< The chasis part.
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
    ~ChasisPartBuilder();
};

#endif //PROJECT_CHASISPARTBUILDER_H
