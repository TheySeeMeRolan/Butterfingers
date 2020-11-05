//
// Created by Rolan-Petr Strydom on 2020/11/05.
//

#include "WeekCalender.h"

void WeekCalender::goToNextWeek()
{

}

void WeekCalender::startSeason()
{

}

void WeekCalender::notify()
{
    vector<  Observer*  >::iterator Obs_it = teams.begin();

    for(Obs_it= teams.begin(); Obs_it!= teams.end(); ++Obs_it)
    {
        (*Obs_it)->update();
    }
}
