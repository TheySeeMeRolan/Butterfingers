#include "LeftCurvePart.h"

using namespace std;

int LeftCurvePart::getTotalDifficulty()
{
    return this->difficulty;
}

int LeftCurvePart::getTotalLength(){
    return this->length;
}

string LeftCurvePart::getTrackPartType(){
    return this->TrackPartType;
}

LeftCurvePart::LeftCurvePart(int l, int d):TrackPart(l,d,"Left curve"){}