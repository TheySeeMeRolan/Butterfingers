/**
* @class Observer
* @brief Observer of the Observer pattern
*
* Used to observer subjects and react when it receives updates.
*
* @author Rolan Strydom u16002513
*/
#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
#include <iostream>
#include <string>

using namespace std;

class Observer {

public:
    /**
     * Pure virtual methods , in child classes will be used to react to updates / notifications from the concrete subjects
     */
    virtual void update()=0;

};


#endif //PROJECT_LOGISTICONSERVER_H
