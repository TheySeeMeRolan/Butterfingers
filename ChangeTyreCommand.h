/**
 * @class ChangeTyreCommand
 * @brief ConcreteCommand participant
 *
 * The ConcreteCommand participant of the Command design pattern.
 * Defines a binding to the Receiver object and an action, in this case the changing of tyres.
 * The Pitcrew will be the receiver, and change the tyres.
 *
 * @author Janlu Pretorius u16014520
 *
 */

#ifndef PROJECT_CHANGETYRECOMMAND_H
#define PROJECT_CHANGETYRECOMMAND_H

#include "Command.h"

class ChangeTyreCommand :public Command {
public:
    /**
     * @brief implementation of pure virtual base class function execute()
     * Invokes the handleRequest() operation on the Human receiver(Pitcrew).
     */
    virtual void execute();

    /**
     * @brief parameterized constructor.
     * Creates the ChangeTyre command and passed on the Human* pointer to the base class Command.
     */
    ChangeTyreCommand(Human* );
};

#endif // PROJECT_CHANGETYRECOMMAND_H
