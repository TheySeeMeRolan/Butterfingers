/**
 * @class Chassis
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds height and aerodynamic score of the chassis.
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_chassis_H
#define PROJECT_chassis_H

#include "CarPart.h"

using namespace std;

class Chassis : public CarPart{
private:
    int height;///< The height of the chassis off the ground.
    int aeroDynamicScore;///< The aero dynamic score of the chassis.

public:
    /**
     * @brief constructor.
     * The constructor that instantiates the derived members with random values.
    */
    Chassis();
    /**
     * @brief return the height of chassis.
     * The implementation of the method that returns the height int of the chassis.
     * @return int height of chassis.
    */
    int getHeight();
    /**
     * @brief return aerodynamic score of chassis.
     * The implementation of the method that returns the aerodynamic score int of the chassis.
     * @return int aerodynamic score of chassis.
    */
    int getAerodynamicsScore();
    /**
     * @brief Set the height.
     * The implementation of the method that sets the height int of the chassis.
     * @param height int of chassis height.
    */
    void setHeight(int hgt);
    /**
     * @brief Set the aerodynamic score.
     * The implementation of the method that sets the aerodynamic score int of the chassis.
     * @param aeroDynamicScore int of chassis aerodynamic score.
    */
    void setAeroDynamicScore(int ADS);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Chassis();
};

#endif //PROJECT_chassis_H
