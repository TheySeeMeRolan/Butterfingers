/**
 * @class ServiceCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "service" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to servicing the teams car.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_SERVICECOMMAND_H
#define PROJECT_SERVICECOMMAND_H

#include "Command.h"

class ServiceCommand: public Command{
public:
    /** @brief executes "service" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
    /** @brief The ServiceCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    ServiceCommand(Human *);
};

#endif 
