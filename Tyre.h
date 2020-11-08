/**
 * @class Tyre
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds tyre type, thread and pressure of the tyres. 
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_TYRE_H
#define PROJECT_TYRE_H

#include <iostream>
#include <string>
#include "CarPart.h"

using namespace std;

class Tyre : public CarPart{
    string tyreType; ///< The type of tyre used -> soft, medium or hard.
    int thread; ///< The thread left on each tyre.
    int pressure; ///< The pressure inside each tyre.
public:
    Tyre();
    /**
     * @brief return thread left on the tyres.
     * The implementation of the method that returns the thread left on the tyres.
     * @return int thread of tyres.
    */
    int getThread();
    /**
     * @brief return pressure of tyres.
     * The implementation of the method that returns the pressure int of the tyres.
     * @return int pressure of tyres.
    */
    int getPressure();
    /**
     * @brief return type of tyre.
     * The implementation of the method that returns the type of tyre string.
     * @return string type of tyre.
    */
    string getTyreType();
    /**
     * @brief Set the thread.
     * The implementation of the method that sets the thread int of the tyres.
     * @param thread int of tyres thread.
    */
    void setThread(int thr);
    /**
     * @brief Set the pressure.
     * The implementation of the method that sets the pressure int of the tyres.
     * @param pressure int of tyres pressure.
    */
    void setPressure(int pre);
    /**
     * @brief Set the type of tyre.
     * The implementation of the method that sets the type of tyre string -> soft, medium or hard.
     * @param aeroDynamicScore string of tyre type.
    */
    void setTyreType(string tyrType);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Tyre();
};

#endif //PROJECT_TYRE_H
