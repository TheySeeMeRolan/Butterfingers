#ifndef PROJECT_CHASIS_H
#define PROJECT_CHASIS_H

#include "CarPart.h"

using namespace std;

class Chasis : public CarPart{
private:
    int height;
    int aeroDynamicScore;

public:
    Chasis();
    int getHeight();
    int getAerodynamicsScore();
    void setHeight(int hgt);
    void setAeroDynamicScore(int ADS);
    ~Chasis();
};

#endif //PROJECT_CHASIS_H
