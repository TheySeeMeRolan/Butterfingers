#include "LeftCurveFactory.h"
using namespace std;

TrackPart* LeftCurveFactory::CreatePart(int l, int d)
{
    return new LeftCurvePart(l,d);
}

TrackPart *LeftCurveFactory::CreatePart()
{
    srand((unsigned)time(NULL));
    int l = rand() % 100 + 1;
    int d = rand() % 100 + 1;
    return new LeftCurvePart(l,d);
}