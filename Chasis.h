#ifndef PROJECT_CHASIS_H
#define PROJECT_CHASIS_H

#include <iostream>
#include <string>

using namespace std;

class Chasis{
private:
    string type;
    int height;
    int aeroDynamicScore;

public:
    string getType();
    int getHeight();
    int getAerodynamicsScore();
};

int Chasis::getAerodynamicsScore() {
    return 0;
}

int Chasis::getHeight() {
    return 0;
}

string Chasis::getType() {
    return std::string();
}

#endif //PROJECT_CHASIS_H
