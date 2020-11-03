#include <iostream>
#include "Formula1.h"

/*
includes for generating tracks
--------------------------------
*/

#include "LeftCurveFactory.h"
#include "RightCurveFactory.h"
#include "StraightFactory.h"


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
    //trackGenerator[1] = new StraightFactory();
    //trackGenerator[2] = new RightCurveFactory();
    //Create Teams - which should construct() cars and create all the humans 

    //Formula1* season1 = new Formula1();
    //season1->addTracks(Tracks Vector);
    //season1->addTeams(Teams Vector)
    //season1->prepareLogistics();
    //season1->startSeason(); // which should basically do the rest of the program, by running the races and generating output?
    cout << "I run YAY!" << endl;

    delete trackGenerator[0];
}