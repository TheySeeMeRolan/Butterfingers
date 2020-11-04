//
// Created by Joanita on 2020/10/28.
//

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

    //    Logistician();
    Logistician(Team* team, Human * s);
};

#endif //PROJECT_LOGISTICIAN_H
