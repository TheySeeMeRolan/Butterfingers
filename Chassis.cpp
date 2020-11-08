#include "Chassis.h"

Chassis::Chassis(): CarPart("Chassis")
{

    int hgt = rand() % 100 + 1;
    int ADS = rand() % 100 + 1;
    this->height = hgt;
    this->aeroDynamicScore = ADS;
}

int Chassis::getHeight() {
    return this->height;
}

int Chassis::getAerodynamicsScore()
{
    return this->aeroDynamicScore;
}

void Chassis::setHeight(int hgt)
{
    this->height = hgt;
}
    
void Chassis::setAeroDynamicScore(int ADS)
{
    this->aeroDynamicScore = ADS;
}
    
Chassis::~Chassis()
{
    cout << "Destructed Chassis (Derived)" << endl;
}   