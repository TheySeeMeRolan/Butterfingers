/**
 * @class WindTunnel
 * @brief Derived class of the template design pattern.
 * 
 * This derived class will implement the run, load and undo 
 * functions to suite the wind tunnel test specifically.
 * This class tests the aerodynamic components of the 
 * current Formula1Car held in teamResources. The aerodynamics
 * are affected by the chassis and the spoiler specifically.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_WINDTUNNEL_H
#define PROJECT_WINDTUNNEL_H

#include "Test.h"
#include <iostream>

class WindTunnel: public Test{
public:
    /** @brief The WindTunnel constructor.
    * @param teamResources a teamResources parameter for initialising the teams 
    * resources which the other test class holds as well.
    * @param hangar a Hangar pointer which the simulation test holds as well.
    */
    WindTunnel(TeamResources*, Hangar*);
    /** @brief laods the wind tunnel test to see if it can run.
    * @return boolean to indicate that it did no exceed the maximim allocated number of tokens
    * for the season. 
    */
    virtual bool load();
    /** @brief runs the wind tunnel.
    * @return to see if the cars aerdocynamics score improved.
    * 
    * Stores the car before any changes are made. 
    * Uses the spoiler and chassis aerodynamics values before the test is run and after
    * the changes are made to see if the car has improved. 
    */
    virtual bool run();
    /** @brief retrives the stored memento if the test did not improve.
    * 
    * It will use the parent class Tests undo function to keep the retrival of the
    * car from the hangar consistent across test types.
    */
    virtual void undo();
};

#endif //PROJECT_WINDTUNNEL_H
