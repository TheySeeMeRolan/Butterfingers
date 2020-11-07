/**
 * @class Chasis
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds height and aerodynamic score of the chasis. 
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_CHASIS_H
#define PROJECT_CHASIS_H

#include "CarPart.h"

using namespace std;

class Chasis : public CarPart{
private:
    int height;///< The height of the chasis off the ground.
    int aeroDynamicScore;///< The aero dynamic score of the chasis.

public:
    /**
     * @brief constructor.
     * The constructor that instantiates the derived members with random values.
    */
    Chasis();
    /**
     * @brief return the height of chasis.
     * The implementation of the method that returns the height int of the chasis.
     * @return int height of chasis.
    */
    int getHeight();
    /**
     * @brief return aerodynamic score of chasis.
     * The implementation of the method that returns the aerodynamic score int of the chasis.
     * @return int aerodynamic score of chasis.
    */
    int getAerodynamicsScore();
    /**
     * @brief Set the height.
     * The implementation of the method that sets the height int of the chasis.
     * @param height int of chasis height.
    */
    void setHeight(int hgt);
    /**
     * @brief Set the aerodynamic score.
     * The implementation of the method that sets the aerodynamic score int of the chasis.
     * @param aeroDynamicScore int of chasis aerodynamic score.
    */
    void setAeroDynamicScore(int ADS);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Chasis();
};

#endif //PROJECT_CHASIS_H
