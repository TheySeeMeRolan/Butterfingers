/**
 * @class Spoiler
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds weight and aerodynamic score of the spoiler. 
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_SPOILER_H
#define PROJECT_SPOILER_H

#include "CarPart.h"

using namespace std;

class Spoiler : public CarPart {
    int weight; ///< The weight the spoiler adds to the car.
    int aeroDynamicScore; ////< The aero dynamic score of the spoiler.
public:
    /**
     * @brief constructor.
     * The constructor that instantiates the derived members with random values.
    */
    Spoiler();
    /**
     * @brief return weight of spoiler.
     * The implementation of the method that returns the weight int of the spoiler.
     * @return int weight of spoiler.
    */
    int getWeight();
    /**
     * @brief return aerodynamic score of spoiler.
     * The implementation of the method that returns the aerodynamic score int of the spoiler.
     * @return int aerodynamic score of spoiler.
    */
    int getAerodynamicsScore();
    /**
     * @brief Set the weight.
     * The implementation of the method that sets the weight int of the spoiler.
     * @param weight int of spoiler weight.
    */
    void setWeight(int wgt);
    /**
     * @brief Set the aerodynamic score.
     * The implementation of the method that sets the aerodynamic score int of the spoiler.
     * @param aeroDynamicScore int of spoiler aerodynamic score.
    */
    void setAerodynamicsScore(int ADS);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Spoiler();
};

#endif //PROJECT_SPOILER_H
