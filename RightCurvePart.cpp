#include "RightCurvePart.h"

using namespace std;

RightCurvePart::RightCurvePart(int l, int d) : TrackPart(l, d, "Right curve"){}

void RightCurvePart::addPart(TrackPart* part)
{
    cout << "AddPart() can only be called on Track" << endl;
}

bool RightCurvePart::isEuropean()
{
    cout << "isEuropean() can only be called on Track" << endl;
    return false;
}

RightCurvePart::~RightCurvePart()
{   
    cout << "Destructed RightCurvePart (derived)" << endl;
}