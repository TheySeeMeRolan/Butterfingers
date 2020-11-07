#ifndef PROJECT_CARMEMENTO_H
#define PROJECT_CARMEMENTO_H

#include "Formula1Car.h"

class CarMemento{
private:
    Formula1Car* car;
public:
    Formula1Car* getState();
    CarMemento(Formula1Car* car);
};

#endif //PROJECT_CARMEMENTO_H
