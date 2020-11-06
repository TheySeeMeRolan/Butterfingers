#include <iostream>
//#include "Formula1.h"

/*
includes for generating tracks
--------------------------------
*/

#include "TrackPartFactory.h"
#include "LeftCurveFactory.h"
#include "RightCurveFactory.h"
#include "StraightFactory.h"
#include "Track.h"
#include "Team.h"
#include "Race.h"


/*
includes for generating teams???
-----------------------------
#include "Team.h"
*/
#include <vector>

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
    trackParts[0] = trackGenerator[0]->createPart(10,10);
    trackParts[1] = trackGenerator[1]->createPart(10,10);
    trackParts[2] = trackGenerator[2]->createPart(10,10);

    Track* track1 = new Track(true);
    track1->addPart(trackParts[0]);
    track1->addPart(trackParts[1]);
    track1->addPart(trackParts[2]);

    Track* track2 = new Track(false);
    track2->addPart(trackParts[0]);
    track2->addPart(trackParts[1]);
    track2->addPart(trackParts[2]);

    WeekCalender* calender = new WeekCalender();

    vector<Race*> seasonRaces = {new Race(track1,"UK"),new Race(track1,"SPAIN"),new Race(track1,"FRANCE"),new Race(track1,"BELGIUM")
                                 ,new Race(track2,"SA"),new Race(track2,"USA")};

    Team* team1 = new Team(calender, "Mercedes",seasonRaces);
    Team* team2 = new Team(calender, "Ferrari",seasonRaces);
    Team* team3 = new Team(calender, "McLaren",seasonRaces);
    Team* team4 = new Team(calender, "Renault",seasonRaces);
    Team* team5 = new Team(calender, "Red Bull",seasonRaces);

    calender->attach(team1);
    calender->attach(team2);
    calender->attach(team3);
    calender->attach(team4);
    calender->attach(team5);

    calender->startSeason();

    Race* race = new Race(track1,"Soweto");
    race->addTeam(team1);
    race->addTeam(team2);
    race->addTeam(team3);
    race->addTeam(team4);
    race->addTeam(team5);

        cout<<"HIEEEEEEEEEEEEEERRRRR"<<((Driver*)team3->getDriver())->getLuck()<<endl;
        cout<<"HIEEEEEEEEEEEEEERRRRR"<<((Driver*)team3->getDriver())->getSkill()<<endl;
        AerodynamicsFactory* aF = new AerodynamicsFactory(nullptr,nullptr);
//        Human* AWE = aF->makePersonnel(nullptr);
//    cout<<"HIEEEEEEEEEEEEEERRRRR"<< ((Driver*)AWE)->getSkill()<<endl;
//    cout<<"HIEEEEEEEEEEEEEERRRRR"<< ((Driver*)AWE)->getLuck()<<endl;

    team3->getDriver();


    Equipment* equipment = new Equipment("Stuff");

    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m          SIMULISATION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";

    race->storeEquipment(equipment);

    race->race();

    // commands and chain of responsibility
    // team1->prepare(); // needs to be implemented still
    team1->race();
    team1->strategise();
    team1->testWindTunnel();
    team1->testSimulation();
    team1->service();
    
    // team1->getLead()->handleRequest("racing");



    //Create Teams - which should construct() cars and create all the humans

//    Formula1* season1 = new Formula1();
//    vector<Track*> seasonTracks;
//    seasonTracks.push_back(track1);
//    season1->addTracks(seasonTracks);
    //season1->addTeams(Teams Vector)
    //season1->prepareLogistics();
    //season1->startSeason(); // which should basically do the rest of the program, by running the races and generating output?
    cout << "I run YAY!" << endl;

    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m         DESTRUCTION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
    delete trackGenerator[0];
}