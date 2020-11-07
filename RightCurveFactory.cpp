#include "RightCurveFactory.h"
using namespace std;

TrackPart* RightCurveFactory::createPart(int l, int d)
{
    return new RightCurvePart(l, d);
}

TrackPart* RightCurveFactory::createPart()
{

    int l = rand() % 100 + 1;
    int d = rand() % 100 + 1;
    return new RightCurvePart(l, d);
}

RightCurveFactory::~RightCurveFactory(){
    cout << "Destructed RightCurveFactory (derived)" << endl;
}