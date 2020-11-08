#include "WeekCalender.h"

void WeekCalender::goToNextWeek()
{
    this->week++;
    cout<< endl <<setw(22)<<""<<" >>> Calender week changes from "<< week -1 <<" to "<<week<< "<<<"<<endl;
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

int WeekCalender::getWeek()
{
    return week;
}

WeekCalender::WeekCalender() {

        cout<<"Constructed calender"<<endl;
        week = -1;


}
