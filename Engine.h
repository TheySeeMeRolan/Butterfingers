#ifndef PROJECT_ENGINE_H
#define PROJECT_ENGINE_H

#include <string>
#include <iostream>

using namespace std;

class Engine {
private:
    string type;
    int horsePower;
    int torque;
public:
    string getType();
    int getHorsePower();
    int getTorque();
};
#endif //PROJECT_ENGINE_H
