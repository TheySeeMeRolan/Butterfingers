#include "WeekCalender.h"

void WeekCalender::goToNextWeek()
{
    this->week++;
    cout<< endl <<" >>> Calender week changes from "<< week -1 <<" to "<<week<< "<<<"<<endl;
}

void WeekCalender::startSeason()
{
    cout<<"##################################### SEASON STARTS ####################################"<<endl;

    for(int a= 0;a<45;a++)
    {
        goToNextWeek();
        notify();
    }
    cout<<"\n################################# SEASON HAS ENDED ###################################"<<endl;



}

void WeekCalender::notify()
{
    cout<<" >>>    CALENDER NOTIFIES OBSERVERS     <<< "<<endl;

    vector<  Observer*  >::iterator Obs_it = teams.begin();
    for(Obs_it= teams.begin(); Obs_it!= teams.end(); ++Obs_it)
    {
        (*Obs_it)->update();
    }
}
