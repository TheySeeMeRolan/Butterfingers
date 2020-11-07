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
    CarMemento* retrieveMemento();
    void storeMemento(CarMemento* car);
    Hangar();
    Hangar(CarMemento* car);
};

#endif //PROJECT_HANGAR_H
