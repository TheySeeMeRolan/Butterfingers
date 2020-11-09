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

    Track* tracks[6] ;
    //Create Tracks
    TrackPartFactory* trackGenerator[3];
    trackGenerator[0] = new LeftCurveFactory();
    trackGenerator[1] = new StraightFactory();
    trackGenerator[2] = new RightCurveFactory();

    for (int i = 0; i < 6; ++i)
    {
        if(i<3)
        {
            tracks[i] = new Track(true);
            //for ease of demonstration we have decided that european races all have  6 straights 4 right curves and 2 left curves
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[0]->createPart());    // add left curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[0]->createPart());    // add left curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[1]->createPart(50,20));   //add straight with own lengths not random
        }
        else
        {
            tracks[i] = new Track(false);

            //for ease of demonstration we have decided that european races all have  4 straights 3 right curves and 3 left curves

            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[0]->createPart());    // add left curve
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[0]->createPart());    // add left curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight
            tracks[i]->addPart(trackGenerator[2]->createPart());    // add right curve
            tracks[i]->addPart(trackGenerator[0]->createPart(70,65));    // add left curve
            tracks[i]->addPart(trackGenerator[1]->createPart());    // add straight


        }
        cout<<endl;
    }



    //create a calender for the season
    WeekCalender* calender = new WeekCalender();
    //create Log to keep track of the scores for the season
    Log* seasonLog= new Log();

    //create races
    vector<Race*> seasonRaces = {
                                 nullptr,                                                   //week 0
                                 nullptr,                                                   //week 1
                                 nullptr,                                                   //week 2
                                 nullptr,                                                   //week 3
                                 new Race(tracks[0],"UK",seasonLog),                //week 4
                                 nullptr,                                                   //week 5
                                 new Race(tracks[1],"SPAIN",seasonLog),             //week 6
                                 nullptr,                                                   //week 7
                                 new Race(tracks[2],"FRANCE",seasonLog),            //week 8
                                 nullptr,                                                   //week 9
                                 new Race(tracks[0],"BELGIUM",seasonLog),           //week 10
                                 nullptr,                                                   //week 11
                                 new Race(tracks[1],"MONACO",seasonLog),            //week 12
                                 nullptr,                                                   //week 13
                                 new Race(tracks[2],"GERMANY",seasonLog),           //week 14
                                 nullptr,                                                   //week 15
                                 new Race(tracks[0],"HUNGARY",seasonLog),           //week 16
                                 nullptr,                                                   //week 17
                                 new Race(tracks[1],"ITALY",seasonLog),             //week 18
                                 nullptr,                                                   //week 19
                                 new Race(tracks[2],"AUSTRIA",seasonLog),           //week 20
                                 nullptr,                                                   //week 21
                                 new Race(tracks[0],"FRANCE",seasonLog),            //week 22
                                 nullptr,                                                   //week 23
                                 new Race(tracks[1],"MONACO",seasonLog),            //week 24
                                 nullptr,                                                   //week 25
                                 //NON EU
                                 new Race(tracks[3],"JAPAN",seasonLog),             //week 26
                                 nullptr,                                                   //week 27
                                 new Race(tracks[4],"CHINA",seasonLog),             //week 28
                                 nullptr,                                                   //week 29
                                 new Race(tracks[5],"SWEDEN",seasonLog),            //week 30
                                 nullptr,                                                   //week 31
                                 new Race(tracks[3],"SOUTH KOREA",seasonLog),       //week 32
                                 nullptr,                                                   //week 33
                                 new Race(tracks[4],"SINGAPORE",seasonLog),         //week 34
                                 nullptr,                                                   //week 35
                                 new Race(tracks[5],"RUSSIA",seasonLog),            //week 36
                                 nullptr,                                                   //week 37
                                 new Race(tracks[3],"USA",seasonLog),               //week 38
                                 nullptr,                                                   //week 39
                                 new Race(tracks[4],"UNITED ARAB EMIRATES",seasonLog), //week 40
                                 nullptr,                                                   //week 41
                                 new Race(tracks[5],"SOUTH-AFRICA",seasonLog),      //week 42
                                 nullptr,                                                   //week 43
                                 new Race(tracks[3],"MALAYSIA",seasonLog)           //week 44

    };

    //creat teams
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
    cout<<"\033[1;36m          EXECUTION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";

    //attach teams to calender
    vector<  Team*  >::iterator team_it = teams.begin();
    for(team_it= teams.begin(); team_it!= teams.end(); ++team_it)
    {
        calender->attach(*team_it);
    }

    //add teams to the Log so that they are a part of the fixtures
    seasonLog->AddTeams(teams);

    //start the season
    calender->startSeason();
    //print the result of the season
    seasonLog->printFinalStandings();


    // IF YOU WOULD WANT TO MOVE TO A NEW SEASON (FOR DEMO PURPOSES USING SAME RACES AS LAST TIME)
    cout<<endl<<endl<<endl<<endl;
    cout << "====TO SHOW THAT WE DO HAVE THE FUNCTIONALITY TO MOVE TO A NEXT SEASON IF WANTED===="<<endl;
    WeekCalender* season2Cal = new WeekCalender();

    team_it = teams.begin();
    for(team_it= teams.begin(); team_it!= teams.end(); ++team_it)
    {
        season2Cal->attach(*team_it);
        (*team_it)->moveToNextSeason(season2Cal,seasonRaces);
    }
    //CAN UNCOMMENT TO SHOW , however chose to comment for demo because our code already print a LOT :P!
    //season2Cal->startSeason();

    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m         DESTRUCTION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
    delete trackGenerator[0];
}
