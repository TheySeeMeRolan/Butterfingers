/**
 * @class StrategiseCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "strategise" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that relates to strategy of the races.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_STRATEGISECOMMAND_H
#define PROJECT_STRATEGISECOMMAND_H

#include "Command.h"

class StrategiseCommand: public Command{
public:
    /** @brief executes "strategise" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    virtual void execute();
    /** @brief The StrategiseCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */   
    StrategiseCommand(Human *p);
};

#endif //PROJECT_STRATEGISE_H
