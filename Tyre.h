#ifndef PROJECT_TYRE_H
#define PROJECT_TYRE_H

#include <iostream>
#include <string>
#include "CarPart.h"

using namespace std;

class Tyre : public CarPart{
    string tyreType;
    int thread;
    int pressure;
public:
    Tyre();
    int getThread();
    int getPressure();
    string getTyreType();
    void setThread(int thr);
    void setPressure(int pre);
    void setTyreType(string tyrType);
    ~Tyre();
};

#endif //PROJECT_TYRE_H
