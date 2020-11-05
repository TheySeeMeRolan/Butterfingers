#include "WeekCalender.h"

void WeekCalender::goToNextWeek()
{
    this->week++;
    cout<< "Calender week changes from "<< week -1 <<"to "<<week;
}

void WeekCalender::startSeason()
{
    cout<<" ###################### SEASON STARTS #####################"<<endl;
    for(int a= 0;a<46;a++)
    {
        goToNextWeek();
        notify();
    }
    cout<<" #################### SEASON HAS ENDED ####################"<<endl;


}

void WeekCalender::notify()
{
    vector<  Observer*  >::iterator Obs_it = teams.begin();

    for(Obs_it= teams.begin(); Obs_it!= teams.end(); ++Obs_it)
    {
        cout<<"CALENDER NOTIFIES OBSERVERS"<<endl;
        (*Obs_it)->update();
    }
}
