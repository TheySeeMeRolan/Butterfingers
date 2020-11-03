#ifndef PROJECT_ENGINE_H
#define PROJECT_ENGINE_H

#include <string>
#include <iostream>

using namespace std;

class Engine {
private:
    string type; //not sure if this is needed
    int horsePower;
    int torque;
public:
    Engine();
    Engine(int hp, int tor);
    string getType(); //not sure if this is needed
    int getHorsePower();
    int getTorque();
};
#endif //PROJECT_ENGINE_H
