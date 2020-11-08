/**
 * @class Command
 * @brief Base class of the command design pattern.
 * 
 * This parent class provides the abstract interface
 * for the command design pattern.
 * 
 * @author Michaela Schormann u19014938
 * 
 */

#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include "Human.h"

using namespace std;

class Command{
protected:
    Human* human;
public:
    /** @brief pure virtual function for concrete command classes to override
     */
    virtual void execute()=0;
    /** @brief The Command constructor.
    * @param human  pointer for starting the chain of responsibility
    */
    Command(Human* human)
    {this->human = human;}
    /** @brief The Command destructor.
    */
    virtual ~Command()
    {};
};

#endif //PROJECT_COMMAND_H
