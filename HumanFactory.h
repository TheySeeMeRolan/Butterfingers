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
private:
    Team* team;
public:
    virtual ~HumanFactory();
    HumanFactory(Team* t);
    virtual Human* makePersonnel()=0;
    virtual Human* makeEngineer()=0;
    Team* getTeam();
};
#endif //PROJECT_HUMANFACTORY_H
