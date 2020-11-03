#include "Engine.h"

using namespace std;

Engine::Engine(){
    this->type = "Engine";
    srand((unsigned)time(NULL));
    int hp = rand() % 100 + 1;
    int tor = rand() % 100 + 1;
    this->horsePower = hp;
    this->torque = tor;
}

Engine::Engine(int hp, int tor){
    this->type = "Engine";
    this->horsePower = hp;
    this->torque = tor;
}

string Engine::getType(){
    return this->type;
}

int Engine::getHorsePower(){
    return this->horsePower;
}

int Engine::getTorque(){
    return this->torque;
}
