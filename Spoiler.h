//
// Created by Joanita on 2020/10/27.
//

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
#endif //PROJECT_SPOILER_H
