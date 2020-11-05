#ifndef PROJECT_CARPART_H
#define PROJECT_CARPART_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class CarPart {
protected: 
    string type;

public:
    CarPart(string typ);
    string virtual getType();
    virtual ~CarPart();
};

#endif //PROJECT_CARPARTBUILDER_H
