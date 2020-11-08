#include "StraightFactory.h"
using namespace std;

TrackPart* StraightFactory::createPart(int l, int d)
{
    return new StraightPart(l, d);
}

TrackPart* StraightFactory::createPart()
{

    int l = rand() % 100 + 1;
    int d = rand() % 100 + 1;
    return new StraightPart(l, d);
}

StraightFactory::~StraightFactory(){
    cout << "Destructed StraightFactory (derived)" << endl;
}