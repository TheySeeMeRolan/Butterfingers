/**
 * @class Test
 * @brief Parent class of the template design pattern.
 * 
 * The parent class of the template design pattern 
 * defines the template method test and the primitive
 * methods load, run and undo.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_TEST_H
#define PROJECT_TEST_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

#include "Formula1Car.h"
#include "TeamResources.h"
#include "Hangar.h"

class Test{

protected:
    TeamResources* teamResources;
    Hangar * hangar;
public:
    /// Test destructor
    virtual ~Test();
    /** @brief The Test constructor.
    * @param t a teamResources parameter for initialising the shared 
    * team resources of the two template classes WindTunnel and Simulation.
    * @param hangar a Hangar pointer for initialising the shared 
    * hangar of the two template classes WindTunnel and Simulation.
    */
    Test(TeamResources * t, Hangar*);
    /**
    * @brief the template method.
    * Runs the algorithm for the tests using the primitive functions
    * implemented in the the derived classes.
    */
    bool test(Formula1Car* car);
    /**
    * @brief primitive method for laoding a test.
    * @return boolean to indicate if the test will be able to run after loading
    * 
    * pure virtual method for testing to see if the
    * test will be able to run. The wind tunnel test
    * wont run if the total number of tokens exceed 
    * 400. But the simulation test has no restrictions.
    */
    virtual bool load()=0;
    /**
    * @brief primitive method for running a test.
    * @return boolean to indicate if the results of the test were better or not.
    * 
    * pure virtual method for running the simulation or wind tunnel
    * test. The if the restults are better, then the test method will
    * not call the undo method.
    */
    virtual bool run()=0;
    /**
    * @brief primitive method for undoing a tests changes.
    * 
    * virtual method implemented both in the parent and
    * derived classes. The derived classes will indicate what test
    * is being undone, then the parent will handle retriveing the 
    * car saved in the hangar if the test was unsuccessful, meaning
    * it didn't yield a better car. 
    */
    virtual void undo();
};

#endif //PROJECT_TEST_H