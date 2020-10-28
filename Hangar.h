//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_HANGAR_H
#define PROJECT_HANGAR_H

#include "CarMemento.h"

#include <iostream>
#include <string>

using namespace std;

class Hangar{
private:
    CarMemento* stored;
public:
    Carmemento* retrieveMemento();
};

#endif //PROJECT_HANGAR_H
