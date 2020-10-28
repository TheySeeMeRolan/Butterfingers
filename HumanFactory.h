//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_HUMANFACTORY_H
#define PROJECT_HUMANFACTORY_H

#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

class HumanFactory{
public:
    virtual ~HumanFactory();
    HumanFactory();
    virtual Human* makePersonnel()=0;
    virtual Human* makeEngineer()=0;
};
#endif //PROJECT_HUMANFACTORY_H
