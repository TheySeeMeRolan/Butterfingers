#include "TrackPart.h"
using namespace std;

TrackPart::TrackPart(int l, int d, string t){

    length = l;
    difficulty = d;
    trackPartType = t;

    cout << t;
    cout << " part made with length: ";
    cout << l;
    cout << " and difficulty: ";
    cout << d << endl;
}

string TrackPart::getTrackPartType(){
    return this->trackPartType;
}

int TrackPart::getTotalLength(){
    return this->length;
} 

int TrackPart::getTotalDifficulty(){
    return this->difficulty;
}

TrackPart::~TrackPart(){
    cout << "Destructed TrackPart(base)" << endl;
}
