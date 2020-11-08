#ifndef BUTTERFINGERS_WEEKCALENDER_H
#define BUTTERFINGERS_WEEKCALENDER_H

#include "Subject.h"
#include <iomanip>
class WeekCalender : public Subject
{
public:
    void goToNextWeek();
    void startSeason();
    void notify();
};


#endif //BUTTERFINGERS_WEEKCALENDER_H
