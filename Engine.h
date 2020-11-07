#ifndef PROJECT_ENGINE_H
#define PROJECT_ENGINE_H

#include "CarPart.h"

using namespace std;

class Engine : public CarPart {
private:
    int horsePower;
    int torque;
public:
    Engine();
    int getHorsePower();
    int getTorque();
    void setHorsePower(int hp);
    void setTorque(int tor);
    ~Engine();
};
#endif //PROJECT_ENGINE_H
