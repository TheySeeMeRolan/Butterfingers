#include "Track.h"
using namespace std;

void Track::addPart(TrackPart* part)
{
    sections.push_back(part);
}

int Track::getTotalDifficulty()
{
    int sum =0;
    for (vector<TrackPart *>::iterator it = sections.begin(); it != sections.end(); ++it)
    {
       sum += (*it)->getTotalDifficulty();
    }
    return sum;
}

int Track::getTotalLength()
{
    int sum = 0;
    for (vector<TrackPart *>::iterator it = sections.begin(); it != sections.end(); ++it)
    {
        sum += (*it)->getTotalLength();
    }
    return sum;
}

bool Track::isEuropean()
{
    return european;
}

string Track::getTrackPartType()
{
    string out;
    out = this->trackPartType;
    out += '\n';

    int lCount = 0;
    int sCount = 0;
    int rCount = 0;

    for (vector<TrackPart *>::iterator it = sections.begin(); it != sections.end(); ++it)
    {
        if ((*it)->getTrackPartType() == "Left curve"){
            lCount++;
        }
        else if ((*it)->getTrackPartType() == "Right curve")
        {
            rCount++;
        }
        else if ((*it)->getTrackPartType() == "Straight")
        {
            sCount++;
        }
    }

    out += "Left curve parts: " + lCount;
    out += '\n';
    out += "Right curve parts: " + rCount;
    out += '\n';
    out += "Straight parts: " + sCount;

    return out;
}

Track::Track(bool isEuropean) : TrackPart(0, 0, "Composite section")
{
    this->european = isEuropean;
}

Track::~Track()
{
    for (vector<TrackPart *>::iterator it = sections.begin(); it != sections.end(); ++it)
    {
        delete (*it);
    }
    sections.clear();
}