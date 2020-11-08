/**
 * @class WindTestingCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "windtunnel test" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to dealing with preparing
 * for a race.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_WINDTESTINGCOMMAND_H
#define PROJECT_WINDTESTINGCOMMAND_H

#include "Command.h"

class WindTestingCommand: public Command{
public:
    /** @brief executes "windtunnel test" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
    /** @brief The WindTestingCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    WindTestingCommand(Human *h);
};



#endif 
