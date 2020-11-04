#ifndef PROJECT_SPOILER_H
#define PROJECT_SPOILER_H

#include <iostream>
#include <string>

using namespace std;

class Spoiler{
    string type;
    int weight;
    int aeroDynamicScore;
public:
    string getType();
    int getWeight();
    int getAerodynamicsScore();
};

int Spoiler::getWeight() {
    return 0;
}

int Spoiler::getAerodynamicsScore() {
    return 0;
}

#endif //PROJECT_SPOILER_H
