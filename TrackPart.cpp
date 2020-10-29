#include "TrackPart.h"
using namespace std;

TrackPart::TrackPart(int l, int d, string t){
    length = l;
    difficulty = d;
    TrackPartType = t;

    cout << this->getTrackPartType();
    cout << " part made with length: " + l;
    cout << " and difficulty: " + d << endl;
}