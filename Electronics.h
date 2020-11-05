#ifndef PROJECT_ELECTRONICS_H
#define PROJECT_ELECTRONICS_H

#include "CarPart.h"

using namespace std;

class Electronics : public CarPart{
    int efficiency;
    int assistance;

public:
    Electronics();
    int getEfficiency();
    int getAssistance();
    void setEfficiency(int eff);
    void setAssistance(int ass);
    ~Electronics();
};

#endif //PROJECT_ELECTRONICS_H
