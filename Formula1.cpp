#include "Formula1.h"

Formula1::Formula1()
{
    f1Logistics = new Logistics();
}

void Formula1::prepareLogistics()
{
    vector<Team*>::iterator it = f1Teams.begin();
    for (; it!=f1Teams.end(); ++it)
    {
        f1Logistics->attach(*it);
    }

    f1Logistics->scheduleSeason(tracksEU,tracksNonEU);
}


void Formula1::startSeason()
{
    f1Logistics->kickOffSeason();
}

void Formula1::addTracks(vector<Track*> tracksToAdd)
{
    vector<Track*>::iterator it = tracksToAdd.begin();
    for (; it!=tracksToAdd.end(); ++it)
    {
        if ((*it)->isEuropean())
            tracksEU.push_back(*it);
        else
            tracksNonEU.push_back(*it);
    }

}

void Formula1::addTeams(vector<Team*> teamsToAdd)
{

    f1Teams = teamsToAdd;

}
