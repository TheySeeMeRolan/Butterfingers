//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_TEST_H
#define PROJECT_TEST_H

#include "Formula1Car.h"

#include <iostream>
#include <string>

using namespace std;

class Test{
public:
    virtual ~Test();
    Test();
    Formula1Car* getState();
    bool test(Formula1Car* car);
    virtual void load();
    virtual void run();
    virtual void save();
    void getResult();
};

#endif //PROJECT_TEST_H
