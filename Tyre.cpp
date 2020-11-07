#include "Tyre.h"

Tyre::Tyre():CarPart("Tyre")
{

    int thr = rand() % 100 + 1;
    int pre = rand() % 100 + 1;
    this->thread = thr;
    this->pressure = pre;
}

int Tyre::getThread()
{
    return this->thread;
}

int Tyre::getPressure()
{
    return this->pressure;
}

void Tyre::setThread(int thr)
{
    this->thread = thr;
}

void Tyre::setPressure(int pre)
{
    this->pressure = pre;
}

Tyre::~Tyre()
{
    cout << "Destructed Tyre (Derived)" << endl;
}
