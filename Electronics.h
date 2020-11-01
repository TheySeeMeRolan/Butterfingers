#ifndef PROJECT_ELECTRONICS_H
#define PROJECT_ELECTRONICS_H

#include <iostream>
#include <string>

using namespace std;

class Electronics{
    string type;
    int efficiency;

public:
    string getType();
    int getEfficiency();
};

#endif //PROJECT_ELECTRONICS_H
