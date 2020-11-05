#include "Subject.h"

void Subject::attach(Observer *team)
{
    teams.push_back(team);
    team->registerTeam(this);
}

void Subject::detach(LogisticObserver *team) {
    team->registerTeam(nullptr);

    vector<LogisticObserver*>::iterator it = teams.begin();
    for (int x=0; x < teams.size() ; ++x,++it)
    {
        if (*it == team)
            teams.erase(it);
    }
}

Subject::Subject()
{
    week = -1;
}

Subject::~Subject() {

    teams.clear();
}
void Subject::notify() {

    vector<  LogisticObserver*  >::iterator Obs_it = teams.begin();

    for(Obs_it= teams.begin(); Obs_it!= teams.end(); ++Obs_it)
    {
        (*Obs_it)->update();
    }
}

int Subject::getWeek()
{
    return week;
}
