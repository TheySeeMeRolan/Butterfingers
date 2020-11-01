#ifndef PROJECT_TYRE_H
#define PROJECT_TYRE_H

#include <iostream>
#include <string>

using namespace std;

class Tyre{
    string type;
    int thread;
public:
    string getType();
    int getThread();
};

#endif //PROJECT_TYRE_H
