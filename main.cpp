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

    vector<Race*> seasonRaces = {
                                 nullptr,                                       //week 0
                                 nullptr,                                       //week 1
                                 nullptr,                                       //week 2
                                 nullptr,                                       //week 3
                                 new Race(track1,"UK"),                 //week 4
                                 nullptr,                                       //week 5
                                 new Race(track1,"SPAIN"),              //week 6
                                 nullptr,                                       //week 7
                                 new Race(track1,"FRANCE"),             //week 8
                                 nullptr,                                       //week 9
                                 new Race(track1,"BELGIUM"),            //week 10
                                 nullptr,                                       //week 11
                                 new Race(track1,"Monaco"),             //week 12
                                 nullptr,                                       //week 13
                                 new Race(track1,"Germany"),            //week 14
                                 nullptr,                                       //week 15
                                 new Race(track1,"Hungary"),            //week 16
                                 nullptr,                                       //week 17
                                 new Race(track1,"Italy"),              //week 18
                                 nullptr,                                       //week 19
                                 new Race(track1,"Austria"),            //week 20
                                 nullptr,                                       //week 21
                                 new Race(track1,"FRANCE"),             //week 22
                                 nullptr,                                       //week 23
                                 new Race(track1,"MONACO"),             //week 24
                                 nullptr,                                       //week 25
                                 //NON EU
                                 new Race(track2,"Japan"),              //week 26
                                 nullptr,                                       //week 27
                                 new Race(track2,"China"),              //week 28
                                 nullptr,                                       //week 29
                                 new Race(track2,"Sweden"),             //week 30
                                 nullptr,                                       //week 31
                                 new Race(track2,"South Korea"),        //week 32
                                 nullptr,                                       //week 33
                                 new Race(track2,"Singapore"),          //week 34
                                 nullptr,                                       //week 35
                                 new Race(track2,"Russia"),             //week 36
                                 nullptr,                                       //week 37
                                 new Race(track2,"United States"),      //week 38
                                 nullptr,                                       //week 39
                                 new Race(track2,"United Arab Emirates"), //week 40
                                 nullptr,                                       //week 41
                                 new Race(track2,"South-Africa"),       //week 42
                                 nullptr,                                       //week 43
                                 new Race(track2,"Malaysia")           //week 44

    };



    Team* team1 = new Team(calender, "Mercedes",seasonRaces);
    Team* team2 = new Team(calender, "Ferrari",seasonRaces);
    Team* team3 = new Team(calender, "McLaren",seasonRaces);
    Team* team4 = new Team(calender, "Renault",seasonRaces);
    Team* team5 = new Team(calender, "AlphaTauri",seasonRaces);
    Team* team6 = new Team(calender, "Williams Racing",seasonRaces);
    Team* team7 = new Team(calender, "Hass F1 Team",seasonRaces);
    Team* team8 = new Team(calender, "Lotus",seasonRaces);
    Team* team9 = new Team(calender, "Alfa Romeo",seasonRaces);
    Team* team10 = new Team(calender, "Toro Rosso",seasonRaces);

    calender->attach(team1);
    calender->attach(team2);
    calender->attach(team3);
    calender->attach(team4);
    calender->attach(team5);
    calender->attach(team6);
    calender->attach(team7);
    calender->attach(team8);
    calender->attach(team9);
    calender->attach(team10);

    calender->startSeason();


    Race* race = new Race(track1,"Soweto");

    cout<<endl;
    Equipment* equipment = new Equipment("Stuff");
    race->storeEquipment(equipment);

    race->addTeam(team1);
    race->addTeam(team2);
    race->addTeam(team3);
    race->addTeam(team4);
    race->addTeam(team5);
    race->addTeam(team6);
    race->addTeam(team7);
    race->addTeam(team8);
    race->addTeam(team9);
    race->addTeam(team10);


//    Equipment* equipment = new Equipment("Stuff");

    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m          SIMULISATION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";



    // commands and chain of responsibility
    // team1->prepare(); // needs to be implemented still
//    team1->race();
//    team1->strategise();
//    team1->testWindTunnel();
//    team1->testSimulation();
//    team1->service();

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


/*
 * MICHAELA MAIN
 */

//#include <iostream>
////#include "Formula1.h"
//
///*
//includes for generating tracks
//--------------------------------
//*/
//
//#include "TrackPartFactory.h"
//#include "LeftCurveFactory.h"
//#include "RightCurveFactory.h"
//#include "StraightFactory.h"
//#include "Track.h"
//#include "Team.h"
//#include "Race.h"
//
//
///*
//includes for generating teams???
//-----------------------------
//#include "Team.h"
//*/
//
//#include <vector>
//
//using namespace std;
//
//int main(){
//
//    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
//    cout<<"\033[1;36m       INITIALIZATION    \033[0m\n";
//    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
//
//    //Create Tracks
//    TrackPartFactory* trackGenerator[3];
//    trackGenerator[0] = new LeftCurveFactory();
//    trackGenerator[1] = new StraightFactory();
//    trackGenerator[2] = new RightCurveFactory();
//
//    TrackPart* trackParts[3];
//    trackParts[0] = trackGenerator[0]->createPart(25,10);
//    trackParts[1] = trackGenerator[1]->createPart(25,10);
//    trackParts[2] = trackGenerator[2]->createPart(25,10);
//
//    Track* track1 = new Track(true);
//    track1->addPart(trackParts[0]);
//    track1->addPart(trackParts[1]);
//    track1->addPart(trackParts[2]);
//
//    Track* track2 = new Track(false);
//    track2->addPart(trackParts[0]);
//    track2->addPart(trackParts[1]);
//    track2->addPart(trackParts[2]);
//
//
//
//    vector<Race*> seasonRaces = {
//                                 nullptr,                                       //week 0
//                                 nullptr,                                       //week 1
//                                 nullptr,                                       //week 2
//                                 nullptr,                                       //week 3
//                                 new Race(track1,"UK"),                 //week 4
//                                 nullptr,                                       //week 5
//                                 new Race(track1,"SPAIN"),              //week 6
//                                 nullptr,                                       //week 7
//                                 new Race(track1,"FRANCE"),             //week 8
//                                 nullptr,                                       //week 9
//                                 new Race(track1,"BELGIUM"),            //week 10
//                                 nullptr,                                       //week 11
//                                 new Race(track1,"Monaco"),             //week 12
//                                 nullptr,                                       //week 13
//                                 new Race(track1,"Germany"),            //week 14
//                                 nullptr,                                       //week 15
//                                 new Race(track1,"Hungary"),            //week 16
//                                 nullptr,                                       //week 17
//                                 new Race(track1,"Italy"),              //week 18
//                                 nullptr,                                       //week 19
//                                 new Race(track1,"Austria"),            //week 20
//                                 nullptr,                                       //week 21
//                                 new Race(track1,"FRANCE"),             //week 22
//                                 nullptr,                                       //week 23
//                                 new Race(track1,"MONACO"),             //week 24
//                                 nullptr,                                       //week 25
//                                 //NON EU
//                                 new Race(track2,"Japan"),              //week 26
//                                 nullptr,                                       //week 27
//                                 new Race(track2,"China"),              //week 28
//                                 nullptr,                                       //week 29
//                                 new Race(track2,"Sweden"),             //week 30
//                                 nullptr,                                       //week 31
//                                 new Race(track2,"South Korea"),        //week 32
//                                 nullptr,                                       //week 33
//                                 new Race(track2,"Singapore"),          //week 34
//                                 nullptr,                                       //week 35
//                                 new Race(track2,"Russia"),             //week 36
//                                 nullptr,                                       //week 37
//                                 new Race(track2,"United States"),      //week 38
//                                 nullptr,                                       //week 39
//                                 new Race(track2,"United Arab Emirates"), //week 40
//                                 nullptr,                                       //week 41
//                                 new Race(track2,"South-Africa"),       //week 42
//                                 nullptr,                                       //week 43
//                                 new Race(track2,"Malaysia")           //week 44
//
//    };
//
//    //Create teams and add them to the calendar
//    WeekCalender* calender = new WeekCalender();
//    Team* team1 = new Team(calender, "Mercedes",seasonRaces);
//    Team* team2 = new Team(calender, "Ferrari",seasonRaces);
//    Team* team3 = new Team(calender, "McLaren",seasonRaces);
//    Team* team4 = new Team(calender, "Renault",seasonRaces);
//    Team* team5 = new Team(calender, "AlphaTauri",seasonRaces);
//
//    Race* race = new Race(track1,"Circuit de Monaco");
//    race->addTeam(team1);
//    race->addTeam(team2);
//    race->addTeam(team3);
//    race->addTeam(team4);
//    race->addTeam(team5);
//
//    Equipment* equipment = new Equipment("Stuff");
//
//    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
//    cout<<"\033[1;36m          SIMULATION           \033[0m\n";
//    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
//
//    race->storeEquipment(equipment);
//
//    race->race();
//
//    // commands and chain of responsibility
//    // team1->prepare(); // needs to be implemented still
//    team1->race();
//    team1->strategise();
//    cout<<endl<<"TEST 1"<<endl;
//    team1->testWindTunnel();
//    cout<<"TEST 2"<<endl;
//    team1->testWindTunnel();
//    cout<<"TEST 3"<<endl;
//    team1->testWindTunnel();
//    cout<<endl<<"TEST 1"<<endl;
//    team1->testSimulation();
//    cout<<"TEST 2"<<endl;
//    team1->testSimulation();
//    cout<<"TEST 3"<<endl;
//    team1->testSimulation();
//    // team1->testSimulation();
//    team1->service();
//
//    // team1->getLead()->handleRequest("racing");
//
//
//
//    //Create Teams - which should construct() cars and create all the humans
//
////    Formula1* season1 = new Formula1();
////    vector<Track*> seasonTracks;
////    seasonTracks.push_back(track1);
////    season1->addTracks(seasonTracks);
//    //season1->addTeams(Teams Vector)
//    //season1->prepareLogistics();
//    //season1->startSeason(); // which should basically do the rest of the program, by running the races and generating output?
//    cout << "I run YAY!" << endl;
//
//    cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
//    cout<<"\033[1;36m         DESTRUCTION    \033[0m\n";
//    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";
//    delete trackGenerator[0];
//    delete trackGenerator[1];
//    delete trackGenerator[2];
//    delete track1;
//}