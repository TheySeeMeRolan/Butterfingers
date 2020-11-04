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
    TeamResources* teamResources;
public:
    virtual ~HumanFactory();
    HumanFactory(Team* t,TeamResources* tR);
    virtual Human* makePersonnel(Human *)=0;
    virtual Human* makeEngineer(Human *)=0;
    Team* getTeam();
    TeamResources* getTeamResources();
};
#endif //PROJECT_HUMANFACTORY_H
