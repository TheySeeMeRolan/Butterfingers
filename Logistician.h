#ifndef PROJECT_LOGISTICIAN_H
#define PROJECT_LOGISTICIAN_H

#include "Personnel.h"

class Logistician: public Personnel{
public:
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
    Logistician(Team* team, Human * s,TeamResources* tR);
};

#endif //PROJECT_LOGISTICIAN_H
