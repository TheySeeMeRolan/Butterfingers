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
     /**
     * @brief chain of responsibility's main function, tests what type of command is suppose to execute and calls that function. Move the chain by calling its succcessor to handle the next request.
    * **/
    void handleRequest(string s);
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void analyseTrack();
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void prepareForRace();
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void travelToRace();
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void orderTyres();
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void shipContainerNonEuropean();
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
    void shipContainerEuropean();



    void equipRace(Race* race, Equipment* equipment);
    /**
     * @brief command that is executed by the chain of reponsibility
     * **/
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
