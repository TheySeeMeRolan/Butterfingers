#include "Team.h"

void Team::update()
{
    int currentWeek;
    currentWeek=registeredAt->getWeek();
    upcomingRaces = registeredAt->getRaces();
    //if
    if(get<2>(upcomingRaces)!= nullptr)
    {
        registeredAt->equipRace(get<2>(upcomingRaces),teamEquipment);
    }
    if(get<1>(upcomingRaces)!= nullptr)
    {
        // DECIDE ON TIRES
    }
    if(get<0>(upcomingRaces)!= nullptr)
    {
        registeredAt->goToRace(this);
    }

}

void Team::shipCarToFactory()
{
//TBD
}
