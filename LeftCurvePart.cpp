#include "LeftCurvePart.h"

using namespace std;

LeftCurvePart::LeftCurvePart(int l, int d):TrackPart(l,d,"Left curve"){}

void LeftCurvePart::addPart(TrackPart* part)
{
    cout << "AddPart() can only be called on Track" << endl;
}

bool LeftCurvePart::isEuropean()
{
    cout << "isEuropean() can only be called on Track" << endl;
    return false;
}

LeftCurvePart::~LeftCurvePart()
{   
    cout << "Destructed LeftCurvePart (derived)" << endl;
}