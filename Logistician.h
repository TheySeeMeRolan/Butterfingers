/**
 * @class Logistician
 * @brief concrete product of the abstract factory pattern. Inherits from Personnel
 * @author Joanita Nell (u19006812) 
 * **/

#ifndef PROJECT_LOGISTICIAN_H
#define PROJECT_LOGISTICIAN_H

#include "Personnel.h"

class Logistician: public Personnel{
public:
    virtual void update();
    void handleRequest(string s);
    void analyseTrack();
    void prepareForRace();
    void travelToRace();
    void orderTyres();
    void shipContainerNonEuropean();
    void shipContainerEuropean();



    void equipRace(Race* race, Equipment* equipment);
    void goToRace(Team* t);
    //    Logistician();
    /**
 * @brief paramaterized constructor. the values specified in the constructor is what is stored in Human.
 * @param team sends the team to the parent, Human.
 * @param s the successor for the for the chain of responsibility design pattern.
 * @param tR link the teamResources to the correct human. 
 * **/
    Logistician(Team* team, Human * s,TeamResources* tR);
};

#endif //PROJECT_LOGISTICIAN_H
