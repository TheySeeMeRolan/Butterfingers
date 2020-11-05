#include "Engine.h"

Engine::Engine():CarPart("Engine")
{
    srand((unsigned)time(NULL));
    int hp = rand() % 100 + 1;
    int tor = rand() % 100 + 1;
    this->horsePower = hp;
    this->torque = tor;
}

int Engine::getHorsePower()
{
    return this->horsePower;
}

int Engine::getTorque()
{
    return this->torque;
}

void Engine::setHorsePower(int hp)
{
    this->horsePower = hp;
}

void Engine::setTorque(int tor)
{
    this->torque = tor;
}

Engine::~Engine()
{
    cout << "Destructed Engine (Derived)" << endl;
}
