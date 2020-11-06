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
    cout<<"\033[1;36m       INITIALIZATION    \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";

    //Create TracksFactories
    TrackPartFactory* trackGenerator[3];
    trackGenerator[0] = new LeftCurveFactory();
    trackGenerator[1] = new StraightFactory();
    trackGenerator[2] = new RightCurveFactory();   
    //Create Tracks
    Track* track1 = new Track(true); 
    track1->addPart(trackGenerator[1]->createPart());
    track1->addPart(trackGenerator[0]->createPart());
    track1->addPart(trackGenerator[2]->createPart());
    track1->addPart(trackGenerator[1]->createPart(50,20));
    //Create teams and add them to the calendar
    WeekCalender* calender = new WeekCalender();
    Team* team1 = new Team(calender, "Mercedes");
    Team* team2 = new Team(calender, "Ferrari");
    Team* team3 = new Team(calender, "McLaren");
    Team* team4 = new Team(calender, "Renault");
    Team* team5 = new Team(calender, "Red Bull");

    Race* race = new Race(track1,"Circuit de Monaco");
    race->addTeam(team1);
    race->addTeam(team2);
    race->addTeam(team3);
    race->addTeam(team4);
    race->addTeam(team5);

    Equipment* equipment = new Equipment("Stuff");

cout<<"\n\n\033[1;36m┌─────────── ⋄❋ ⋄ ───────────┐\033[0m\n";
    cout<<"\033[1;36m          SIMULATION           \033[0m\n";
    cout<<"\033[1;36m└─────────── ⋄❋ ⋄ ───────────┘\033[0m\n";

    race->storeEquipment(equipment);

    race->race();

    // commands and chain of responsibility
    // team1->prepare(); // needs to be implemented still
    team1->race();
    team1->strategise();
    cout<<endl<<"TEST 1"<<endl;
    team1->testWindTunnel();
    cout<<"TEST 2"<<endl;
    team1->testWindTunnel();
    cout<<"TEST 3"<<endl;
    team1->testWindTunnel();
    cout<<endl<<"TEST 1"<<endl;
    team1->testSimulation();
    cout<<"TEST 2"<<endl;
    team1->testSimulation();
        cout<<"TEST 3"<<endl;
    team1->testSimulation();
    // team1->testSimulation();
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
    delete trackGenerator[1];
    delete trackGenerator[2];
    delete track1;
}