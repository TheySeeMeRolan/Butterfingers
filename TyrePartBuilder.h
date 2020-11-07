/**
 * @class TyrePartBuilder
 * @brief concrete class.
 * 
 * A concrete builder for the builder design pattern. 
 * Implements the methods defined in the abstract interface class.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_TYREPARTBUILDER_H
#define PROJECT_TYREPARTBUILDER_H

#include "Tyre.h"
#include "CarPartBuilder.h"

class TyrePartBuilder: public CarPartBuilder {
private:
    Tyre* tyrePart;///< The tyres part.
public:
    /**
     * @brief create car part.
     * The implementation for building the tyres car part.
     */
    void buildPart();
    /**
     * @brief set tyre type.
     * The implementation for setting the tyre part type -> soft, medium or hard.
     */
    void setType(string tyreType);
    /**
     * @brief return car part.
     * The implementation for returning the tyres car part.
     */
    CarPart* getPart();
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class CarPartBuilder.
    */
    ~TyrePartBuilder();
};

#endif //PROJECT_TYREPARTBUILDER_H
