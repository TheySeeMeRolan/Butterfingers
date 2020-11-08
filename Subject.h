/**
* @class Subject
* @brief Subject of the Observer pattern
*
* This is used to attach observers to itself and then notify them of any changes via notify();
*
* @author Rolan Strydom u16002513
*/
#ifndef PROJECT_SUBJECT_H
#define PROJECT_SUBJECT_H

#include <tuple>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "Observer.h"

using namespace std;

class Subject{
protected:
    vector<Observer*> teams;
    /// Vector of observer object pointers , used to store all the Observers observing the subject.
public:
    /**
     * Used to attach Observer*s to team so that they can be notified later on.
     * @param team The observer pointer (which will be a team) that you wish to attach .
     */
    void attach(Observer* team);
    /**
     * Used to detach should a team wish to leave the season and not receive updates on it.
     * @param team Observer you wish to detach
     */
    void detach(Observer* team);
    /**
     * Pure virtual function , created so that observers have an interface to the concrete Subject and its getWeek method.
     * Will be used to get the week season is in.
     * @return
     */
    virtual int getWeek()=0;
    /**
     * Pure virtual function , created so that observers have an interface to the concrete Subject and its startSeason method.
     */
    virtual void startSeason()=0;
    /**
     * Used to notify all attached Observers in the teams variable that changes have occurred.
     */
    virtual void notify();
    /**
     * Destructor just used to clean teams vector variable.
     */
    virtual ~Subject();
};

#endif //PROJECT_SUBJECT_H
