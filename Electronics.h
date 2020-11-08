/**
 * @class Electronics
 * @brief concrete class.
 * 
 * A concrete product participant for the builder design pattern. 
 * Holds effiency and assistance score of the electronics. 
 * implements getters and setters for both of these values.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_ELECTRONICS_H
#define PROJECT_ELECTRONICS_H

#include "CarPart.h"

using namespace std;

class Electronics : public CarPart{
    int efficiency; ///< The effiency of the electronic components.
    int assistance; ///< The assistance provided by the electronic components.

public:
    /**
     * @brief constructor.
     * The constructor that instantiates the derived members with random values.
    */
    Electronics();
    /**
     * @brief return the effiency of electronics.
     * The implementation of the method that returns the effiency int of the electronics.
     * @return int effiency of electronics.
    */
    int getEfficiency();
    /**
     * @brief return assistance of electronics.
     * The implementation of the method that returns the assistance int of the electronics.
     * @return int assistance of electronics.
    */
    int getAssistance();
    /**
     * @brief Set the effiency.
     * The implementation of the method that sets the effiency int of the electronics.
     * @param effiency int of electronics effiency.
    */
    void setEfficiency(int eff);
    /**
     * @brief Set the assistance.
     * The implementation of the method that sets the assistance int of the electronics.
     * @param assistance int of assistance.
    */
    void setAssistance(int ass);
    /**
     * @brief destructor.
     * The concrete destructor that ensures this derived class is destroyed before the base class carPart.
    */
    ~Electronics();
};

#endif //PROJECT_ELECTRONICS_H
