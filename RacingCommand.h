/**
 * @class RacingCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "race" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to dealing with racing the car.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_RACINGCOMMAND_H
#define PROJECT_RACINGCOMMAND_H

#include "Command.h"

class RacingCommand: public Command{
public:
    /** @brief executes "race" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
    /** @brief The RacingCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    RacingCommand(Human *p);
};

#endif //PROJECT_RACING_H
