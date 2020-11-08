/**
 * @class PrepareCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "prepare" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to dealing with preparing
 * for a race.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_PREPARECOMMAND_H
#define PROJECT_PREPARECOMMAND_H

#include "Command.h"

class PrepareCommand: public Command{
public:
    /** @brief The PrepareCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    PrepareCommand(Human *p);
    /** @brief executes "prepare" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
};

#endif //PROJECT_PREPARE_H
