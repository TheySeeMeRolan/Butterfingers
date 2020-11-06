#include "Electronics.h"

Electronics::Electronics():CarPart("Electronics")
{
    int eff = rand() % 100 + 1;
    int ass = rand() % 100 + 1;
    this->efficiency = eff;
    this->assistance = ass;
}

int Electronics::getEfficiency()
{
    return this->efficiency;
}

int Electronics::getAssistance()
{
    return this->assistance;
}

void Electronics::setEfficiency(int eff)
{
    this->efficiency = eff;
}

void Electronics::setAssistance(int ass)
{
    this->assistance = ass;
}

Electronics::~Electronics()
{
    cout << "Destructed Electronics (Derived)" << endl;
}