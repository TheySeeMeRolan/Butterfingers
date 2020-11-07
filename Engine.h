/**
 * @class Engine
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds horsePower and torque of the engine. 
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_engine_H
#define PROJECT_engine_H

#include "CarPart.h"

using namespace std;

class Engine : public CarPart {
private:
    int horsePower; ///< The horsepower generated. 
    int torque; ///< The torque generated.
public: 
   /**
     * @brief constructor.
     * The constructor that instantiates the derived members with random values.
    */
    Engine();
    /**
     * @brief return horsepower of engine.
     * The implementation of the method that returns the horsepower int of the engine.
     * @return int horsepower of engine.
    */
    int getHorsePower();
    /**
     * @brief return torque of engine.
     * The implementation of the method that returns the torque int of the engine.
     * @return int torque of engine.
    */
    int getTorque();
    /**
     * @brief Set the horsepower.
     * The implementation of the method that sets the horsepower int of the engine.
     * @param horsePower int of engine horsepower.
    */
    void setHorsePower(int hp);
    /**
     * @brief Set the torque.
     * The implementation of the method that sets the torque int of the engine.
     * @param torque int of engine torque.
    */
    void setTorque(int tor);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Engine();
};
#endif //PROJECT_engine_H
