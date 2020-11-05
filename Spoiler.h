#ifndef PROJECT_SPOILER_H
#define PROJECT_SPOILER_H

#include "CarPart.h"

using namespace std;

class Spoiler : public CarPart {
    int weight;
    int aeroDynamicScore;
public:
    Spoiler();
    int getWeight();
    int getAerodynamicsScore();
    void setWeight(int wgt);
    void setAerodynamicsScore(int ADS);
    ~Spoiler();
};

#endif //PROJECT_SPOILER_H
