#ifndef BUTTERFINGERS_WEEKCALENDER_H
#define BUTTERFINGERS_WEEKCALENDER_H

#include "Subject.h"
#include <iomanip>
class WeekCalender : public Subject
{
public:
    WeekCalender()
    {
        cout<<"Constructed calender"<<endl;
    }
    void goToNextWeek();
    void startSeason();
    void notify();
};


#endif //BUTTERFINGERS_WEEKCALENDER_H
