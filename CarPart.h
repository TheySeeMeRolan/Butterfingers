/**
 * @class CarPart
 * @brief interface class.
 * 
 * An interface participant for the builder design pattern. 
 * Allows base members to be instantiated in the constructor. 
 * Implements the getType() method for all derived classes.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_CARPART_H
#define PROJECT_CARPART_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class CarPart {
protected: 
    string type;///< The type of the carPart -> Engine, Tyre, Chassis, Electronics, Spoiler.

public:
    /**
     * @brief parameterized constructor.
     * The constructor that allows the base members to be instantiated.
     * @param type string of carPart type -> Engine, Tyre, Chassis, Electronics, Spoiler.
    */
    CarPart(string typ);
    /**
     * @brief return type of carPart.
     * The implementation of the method that returns the carPart type -> Engine, Tyre, Chassis, Electronics, Spoiler.
     * @return string carPart type.
    */
    string getType();
    /**
     * @brief virtual destructor.
     * The virtual destructor that ensures the base class carPart is destroyed after the derived class.
    */
    virtual ~CarPart();
};

#endif //PROJECT_CARPARTBUILDER_H
