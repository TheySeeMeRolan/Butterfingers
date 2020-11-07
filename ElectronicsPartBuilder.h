/**
 * @class ElectronicsPartBuilder
 * @brief concrete class.
 * 
 * A concrete builder for the builder design pattern. 
 * Implements the methods defined in the abstract interface class.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_ELECTRONICSPARTBUILDER_H
#define PROJECT_ELECTRONICSPARTBUILDER_H

#include "Electronics.h"
#include "CarPartBuilder.h"

class ElectronicsPartBuilder: public CarPartBuilder{
private:
    Electronics* electronicPart; ///< The electronics part.
public:
    /**
     * @brief create car part.
     * The implementation for building the electronics car part.
     */
    void buildPart();
    /**
     * @brief return car part.
     * The implementation for returning the electronics car part.
     */
    CarPart* getPart();
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class CarPartBuilder.
    */
    ~ElectronicsPartBuilder();
};


#endif //PROJECT_ELECTRONICSPARTBUILDER_H
