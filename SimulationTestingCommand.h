/**
 * @class SimulationTestingCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "simulation test" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to testing the car in the
 * simulation races.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_SIMULATIONTESTINGCOMMAND_H
#define PROJECT_SIMULATIONTESTINGCOMMAND_H

#include "Command.h"

class SimulationTestingCommand: public Command{
public:
    /** @brief executes "simulation test" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
    /** @brief The SimulationTestingCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    SimulationTestingCommand(Human *p);
};

#endif 
