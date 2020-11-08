/**
 * @class Test
 * @brief Derived class of the template design pattern.
 * 
 * This derived class will implement the run, load and undo 
 * functions to suite the simulation test specifically.
 * This class tests the electronics and engine of the 
 * current Formula1Car held in teamResources. 
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_SIMULATION_H
#define PROJECT_SIMULATION_H

#include "Test.h"
#include <iostream>

class Simulation: public Test{
public:
    /** @brief The Simulation constructor.
    * @param teamResources a teamResources parameter for initialising the teams 
    * resources which the other test class holds as well.
    * @param hangar a Hangar pointer which the wind tunnel test holds as well.
    */
    Simulation(TeamResources*, Hangar*);
    /** @brief laods the simulation test to see if it can run.
    * @return boolean will always return true since the simulation can be infinitely run.
    */
    virtual bool load();
    /** @brief runs the simulation.
    * @return to see if the cars electronics and engine scores have improved.
    * 
    * Stores the car before any changes are made. 
    * Uses the engine and electronics to test if the changes made to the car improved
    * it or not.
    */
    virtual bool run();
    /** @brief retrives the stored memento if the test did not improve.
    * 
    * It will use the parent class Tests undo function to keep the retrival of the
    * car from the hangar consistent across test types.
    */
    virtual void undo();
};

#endif //PROJECT_SIMULATION_H