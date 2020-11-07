#include "Spoiler.h"

Spoiler::Spoiler():CarPart("Spoiler")
{

    int wgt = rand() % 100 + 1;
    int ADS = rand() % 100 + 1;
    this->weight = wgt;
    this->aeroDynamicScore = ADS;
}

int Spoiler::getWeight()
{
    return this->weight;
}

int Spoiler::getAerodynamicsScore()
{
    return this->aeroDynamicScore;
}

void Spoiler::setWeight(int wgt)
{
    this->weight = wgt;
}

void Spoiler::setAerodynamicsScore(int ADS)
{
    this->aeroDynamicScore = ADS;
}

Spoiler::~Spoiler()
{
    cout << "Destructed Spoiler (Derived)" << endl;
}