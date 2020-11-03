#include "StraightPart.h"

using namespace std;

StraightPart::StraightPart(int l, int d) : TrackPart(l, d, "Straight"){}

void StraightPart::addPart(TrackPart* part)
{
    cout << "AddPart() can only be called on Track" << endl;
}

bool StraightPart::isEuropean()
{
    cout << "isEuropean() can only be called on Track" << endl;
}