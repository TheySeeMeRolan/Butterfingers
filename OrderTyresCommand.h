/**
 * @class OrderTyresCommand
 * @brief Derived class of the command design pattern.
 * 
 * This derived class will have an execute method
 * that simply calls "orderTyres" on the human lead
 * stored in teamresources. This will go through the 
 * chain of responsibility allowing each human to call
 * a function that may relate to dealing with ordering 
 * tyres.
 * 
 * @author Rolan Strydom
 * 
 */


#ifndef BUTTERFINGERS_ORDERTYRESCOMMAND_H
#define BUTTERFINGERS_ORDERTYRESCOMMAND_H
#include "Command.h"

class OrderTyresCommand : public Command{
public:
    /** @brief The OrderTyresCommand constructor.
    * @param p a Human pointer for starting the chain of responsibility
    */
    OrderTyresCommand(Human *p);
    /** @brief executes "orderTyres" on chain of humans (personnel and engineers).
    * Calls the handleRequest function on the human lead it was initialised with.
    */
    void execute();
};

#endif //BUTTERFINGERS_ORDERTYRESCOMMAND_H
