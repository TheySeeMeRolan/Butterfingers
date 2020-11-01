//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ELECTRONIC_H
#define PROJECT_ELECTRONIC_H

#include "Engineering.h"

class ElectronicEngineer: public Engineering{
public:
    void handleRequest(string s);
    void tinker();
    ElectronicEngineer();
    ElectronicEngineer(Team* team, Human * s);
};


#endif //PROJECT_ELECTRONIC_H
