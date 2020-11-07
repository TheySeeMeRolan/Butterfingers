#include "Chasis.h"

Chasis::Chasis():CarPart("Chasis")
{

    int hgt = rand() % 100 + 1;
    int ADS = rand() % 100 + 1;
    this->height = hgt;
    this->aeroDynamicScore = ADS;
}

int Chasis::getHeight() {
    return this->height;
}

int Chasis::getAerodynamicsScore()
{
    return this->aeroDynamicScore;
}

void Chasis::setHeight(int hgt)
{
    this->height = hgt;
}
    
void Chasis::setAeroDynamicScore(int ADS)
{
    this->aeroDynamicScore = ADS;
}
    
Chasis::~Chasis()
{
    cout << "Destructed Chasis (Derived)" << endl;
}   