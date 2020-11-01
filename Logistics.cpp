#include "Logistics.h"

void Logistics::scheduleSeason(vector<Track*> tracksForRaces)
{

    vector<Track*> unusedTracks = tracksForRaces ;
    vector<string> europeanLocations =
            {
             "Nürburgring , Germany",
             "Spa, Belgium"         ,
             "Monza, Italy"         ,
             "Clermont-Ferrand, France",
             "Silverstone, Britain" ,
             "Osterreichring, Austria",
             "Monte Carlo, Monaco"  ,
             "Brands Hatch, Britain",
             "Zandvoort, Netherlands",
             "Estoril, Portugal"    ,
             } ;

    vector<string> nonEuropeanLocations =
            {
             "Abu Dhabi, United Arab Emirates" ,
             "Watkins Glen, United States"      ,
             "Mimasaka, Japan"                  ,
             "Sochi, Russia"                    ,
             "Suzuka, Japan"                    ,
             "Shanghai, China"                  ,
             "Sepang, Malaysia"                 ,
             "Anderstorp, Sweden"               ,
             "Singapore"                        ,
             "Yeongam, South Korea"
            };

    vector<string> unusedEuropeanLocations = europeanLocations;
    vector<string> unusedNonEuropeanLocations = nonEuropeanLocations;


    for (int r = 0;r  <42 ; r++)
    {
        if(r%2 == 1) // racing weekend
        {
            //section that determines which unused track to use

            int trackNumber = rand() % unusedTracks.size();
            Track* trackToBeUsed = unusedTracks.at(trackNumber);
            unusedTracks.erase( unusedTracks.begin()+(trackNumber-1));

            if (unusedTracks.size() == 0)
                unusedTracks=tracksForRaces;

            int locationNumber;
            string location;
            if (trackToBeUsed->isEuropean())
            {
                 locationNumber = rand() % unusedEuropeanLocations.size();
                 location = unusedEuropeanLocations.at(locationNumber);
                 unusedEuropeanLocations.erase(unusedEuropeanLocations.begin()+(locationNumber-1));

                 if (unusedEuropeanLocations.size() == 0)
                    unusedEuropeanLocations=europeanLocations;

            }
            else
            {
                locationNumber = rand() % unusedNonEuropeanLocations.size();
                location = unusedNonEuropeanLocations.at(locationNumber);
                unusedNonEuropeanLocations.erase(unusedNonEuropeanLocations.begin()+(locationNumber-1));

                if (unusedNonEuropeanLocations.size() == 0)
                    unusedNonEuropeanLocations=nonEuropeanLocations;
            }

            races.push_back(new Race(trackToBeUsed , location));





        }
        else
        {
            races.push_back(nullptr);
        }


    }

}

Logistics::Logistics(vector<Team *> teams)
{

}

void Logistics::equipRace(Race *race, Equipment *equipment){
    for (int r = 0;r  <42 ; r++)
    {

        if (this->races.at(r) == race)
        {
            races.at(r)->storeEquipment(equipment);
        }

    }

}

void Logistics::startNextWeek()
{
    week++;
    notify();
}

tuple<Race *, Race *, Race *> Logistics::getRaces()
{
    tuple <Race*,Race*,Race*> racingSchedule = make_tuple( races.at(0), races.at(week+4), races.at(week+12));
    return racingSchedule;
}

void Logistics::kickOffSeason()
{
    for (int r = 0;r  <42 ; r++)
    {
        startNextWeek();
    }

}

void Logistics::goToRace(Team *t)
{
races.at(week)->addTeam(t);
}
