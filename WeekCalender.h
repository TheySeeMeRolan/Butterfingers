//
// Created by Rolan-Petr Strydom on 2020/11/05.
//

#ifndef BUTTERFINGERS_WEEKCALENDER_H
#define BUTTERFINGERS_WEEKCALENDER_H

#include "Subject.h"
class WeekCalender : public Subject
{
public:
    void goToNextWeek();
    void startSeason();
    void notify();
};


#endif //BUTTERFINGERS_WEEKCALENDER_H
