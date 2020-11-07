//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ELECTRONICFACTORY_H
#define PROJECT_ELECTRONICFACTORY_H

#include "HumanFactory.h"
#include "ElectronicEngineer.h"
#include "Logistician.h"

class ElectronicFactory: public HumanFactory{
public:
    ElectronicFactory(Team* t,TeamResources* tR);
    Human * makeEngineer(Human * s) ;
    Human * makePersonnel(Human * s) ;
};

#endif //PROJECT_ELECTRONICFACTORY_H
