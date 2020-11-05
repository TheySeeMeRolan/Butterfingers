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

    WeekCalender* calender = new WeekCalender();
    Team* team1 = new Team(calender);
    Team* team2 = new Team(calender);
    Team* team3 = new Team(calender);
    Team* team4 = new Team(calender);
    Team* team5 = new Team(calender);

    Race* race = new Race(track1,"Soweto");
    race->addTeam(team1);
    race->addTeam(team2);
    race->addTeam(team3);
    race->addTeam(team4);
    race->addTeam(team5);

    Equipment* equipment = new Equipment("Stuff");
    race->storeEquipment(equipment);

    race->race();

    //Create Teams - which should construct() cars and create all the humans

//    Formula1* season1 = new Formula1();
//    vector<Track*> seasonTracks;
//    seasonTracks.push_back(track1);
//    season1->addTracks(seasonTracks);
    //season1->addTeams(Teams Vector)
    //season1->prepareLogistics();
    //season1->startSeason(); // which should basically do the rest of the program, by running the races and generating output?
    cout << "I run YAY!" << endl;

    delete trackGenerator[0];
}