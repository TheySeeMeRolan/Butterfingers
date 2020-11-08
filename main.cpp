#include <iostream>
#include <vector>
#include "TrackPartFactory.h"
#include "LeftCurveFactory.h"
#include "RightCurveFactory.h"
#include "StraightFactory.h"
#include "Track.h"
#include "Team.h"
#include "Race.h"
#include "Log.h"

using namespace std;

int main(){
    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m       INITIALISATIONS    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";


    //Create Tracks
    TrackPartFactory* trackGenerator[3];
    trackGenerator[0] = new LeftCurveFactory();
    trackGenerator[1] = new StraightFactory();
    trackGenerator[2] = new RightCurveFactory();

    TrackPart* trackParts[3];
    trackParts[0] = trackGenerator[0]->createPart(25,10);
    trackParts[1] = trackGenerator[1]->createPart(25,10);
    trackParts[2] = trackGenerator[2]->createPart(25,10);

    Track* track1 = new Track(true);
    track1->addPart(trackParts[0]);
    track1->addPart(trackParts[1]);
    track1->addPart(trackParts[2]);

    Track* track2 = new Track(false);
    track2->addPart(trackParts[0]);
    track2->addPart(trackParts[1]);
    track2->addPart(trackParts[2]);

    WeekCalender* calender = new WeekCalender();
    Log* champ1= new Log();

    vector<Race*> seasonRaces = {
                                 nullptr,                                       //week 0
                                 nullptr,                                       //week 1
                                 nullptr,                                       //week 2
                                 nullptr,                                       //week 3
                                 new Race(track1,"UK",champ1),                 //week 4
                                 nullptr,                                       //week 5
                                 new Race(track1,"SPAIN",champ1),              //week 6
                                 nullptr,                                       //week 7
                                 new Race(track1,"FRANCE",champ1),             //week 8
                                 nullptr,                                       //week 9
                                 new Race(track1,"BELGIUM",champ1),            //week 10
                                 nullptr,                                       //week 11
                                 new Race(track1,"MONACO",champ1),             //week 12
                                 nullptr,                                       //week 13
                                 new Race(track1,"GERMANY",champ1),            //week 14
                                 nullptr,                                       //week 15
                                 new Race(track1,"HUNGARY",champ1),            //week 16
                                 nullptr,                                       //week 17
                                 new Race(track1,"ITALY",champ1),              //week 18
                                 nullptr,                                       //week 19
                                 new Race(track1,"AUSTRIA",champ1),            //week 20
                                 nullptr,                                       //week 21
                                 new Race(track1,"FRANCE",champ1),             //week 22
                                 nullptr,                                       //week 23
                                 new Race(track1,"MONACO",champ1),             //week 24
                                 nullptr,                                       //week 25
                                 //NON EU
                                 new Race(track2,"JAPAN",champ1),              //week 26
                                 nullptr,                                       //week 27
                                 new Race(track2,"CHINA",champ1),              //week 28
                                 nullptr,                                       //week 29
                                 new Race(track2,"SWEDEN",champ1),             //week 30
                                 nullptr,                                       //week 31
                                 new Race(track2,"SOUTH KOREA",champ1),        //week 32
                                 nullptr,                                       //week 33
                                 new Race(track2,"SINGAPORE",champ1),          //week 34
                                 nullptr,                                       //week 35
                                 new Race(track2,"RUSSIA",champ1),             //week 36
                                 nullptr,                                       //week 37
                                 new Race(track2,"USA",champ1),      //week 38
                                 nullptr,                                       //week 39
                                 new Race(track2,"UNITED ARAB EMIRATES",champ1), //week 40
                                 nullptr,                                       //week 41
                                 new Race(track2,"SOUTH-AFRICA",champ1),       //week 42
                                 nullptr,                                       //week 43
                                 new Race(track2,"MALAYSIA",champ1)           //week 44

    };


    vector<Team*> teams = {
                           new Team(calender, "Mercedes",seasonRaces),
                           new Team(calender, "Ferrari",seasonRaces),
                           new Team(calender, "McLaren",seasonRaces),
                           new Team(calender, "Renault",seasonRaces),
                           new Team(calender, "AlphaTauri",seasonRaces),
                           new Team(calender, "Williams Racing",seasonRaces),
                           new Team(calender, "Hass F1 Team",seasonRaces),
                           new Team(calender, "Lotus",seasonRaces),
                           new Team(calender, "Alfa Romeo",seasonRaces),
                           new Team(calender, "Toro Rosso",seasonRaces)
                           };



    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m          SIMULISATION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";


    vector<  Team*  >::iterator team_it = teams.begin();
    for(team_it= teams.begin(); team_it!= teams.end(); ++team_it)
    {
        calender->attach(*team_it);
    }

    champ1->AddTeams(teams);
    calender->startSeason();
    champ1->printFinalStandings();




    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m         DESTRUCTION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
    delete trackGenerator[0];
}
