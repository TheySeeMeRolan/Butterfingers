#include "Logistics.h"

void Logistics::scheduleSeason(vector<Track*> tracksForEU,vector<Track*> tracksForNonEU)
{

    vector<Track*> unusedTracksEU = tracksForEU ;
    vector<Track*> unusedTracksNonEU = tracksForNonEU ;
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


    for (int r = 0;r  <46 ; r++)
    {
        int trackNumber;
        Track* trackToBeUsed;
        int locationNumber;
        string location;
        if (r<4)
        {
            races.push_back(nullptr);
            continue;
        }
        if(r%2 == 0 ) // racing weekend
        {
            if (r<=24) // if EU race range
            {
                trackNumber = rand() % unusedTracksEU.size();
                trackToBeUsed = unusedTracksEU.at(trackNumber);
                unusedTracksEU.erase(unusedTracksEU.begin() + (trackNumber - 1));

                if (unusedTracksEU.size() == 0)
                    unusedTracksEU = tracksForEU;


                locationNumber = rand() % unusedEuropeanLocations.size();
                location = unusedEuropeanLocations.at(locationNumber);
                unusedEuropeanLocations.erase(unusedEuropeanLocations.begin() + (locationNumber - 1));

                if (unusedEuropeanLocations.size() == 0)
                    unusedEuropeanLocations = europeanLocations;

            }
            else
            {
                trackNumber = rand() % unusedTracksNonEU.size();
                trackToBeUsed = unusedTracksNonEU.at(trackNumber);
                unusedTracksNonEU.erase(unusedTracksNonEU.begin() + (trackNumber - 1));

                if (unusedTracksNonEU.size() == 0)
                    unusedTracksNonEU = tracksForNonEU;


                locationNumber = rand() % unusedNonEuropeanLocations.size();
                location = unusedNonEuropeanLocations.at(locationNumber);
                unusedNonEuropeanLocations.erase(unusedNonEuropeanLocations.begin() + (locationNumber - 1));

                if (unusedNonEuropeanLocations.size() == 0)
                    unusedNonEuropeanLocations = nonEuropeanLocations;
            }

            races.push_back(new Race(trackToBeUsed , location));

        }
        else
        {
            races.push_back(nullptr);
        }


    }

}

void Logistics::equipRace(Race *race, Equipment *equipment)
{
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
