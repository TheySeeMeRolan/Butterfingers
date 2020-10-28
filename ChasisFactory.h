//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_CHASISFACTORY_H
#define PROJECT_CHASISFACTORY_H

#include "HumanFactory.h"

class ChasisFactory: public HumanFactory{
public:
    ChasisFactory();
    virtual Human * makeEngineer() ;
    virtual Human * makePersonnel() ;
};

#endif //PROJECT_CHASISFACTORY_H
