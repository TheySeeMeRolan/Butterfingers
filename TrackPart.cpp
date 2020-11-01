#include "TrackPart.h"
using namespace std;

TrackPart::TrackPart(int l, int d, string t){
    length = l;
    difficulty = d;
    trackPartType = t;

    cout << this->getTrackPartType();
    cout << " part made with length: " + l;
    cout << " and difficulty: " + d << endl;
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
