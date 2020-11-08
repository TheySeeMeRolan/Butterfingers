#include "Subject.h"

void Subject::attach(Observer *team)
{
    teams.push_back(team);

}

void Subject::detach(Observer *team) {

    vector<Observer*>::iterator it = teams.begin();
    for (int x=0; x < teams.size() ; ++x,++it)
    {
        if (*it == team)
            teams.erase(it);
    }
}


Subject::~Subject()
{
    teams.clear();
}
void Subject::notify() {

    cout<<setw(22)<<""<<" >>>    SUBJECT NOTIFIES OBSERVERS    <<< "<<endl;

    vector<  Observer*  >::iterator Obs_it = teams.begin();

    for(Obs_it= teams.begin(); Obs_it!= teams.end(); ++Obs_it)
    {
        (*Obs_it)->update();
    }
}

