/**
 * @class CarMemento
 * @brief Memento pattern's memento participant.Used by TeamResources
 * @author Joanita Nell (u19006812)
 * **/


#ifndef PROJECT_CARMEMENTO_H
#define PROJECT_CARMEMENTO_H

#include "Formula1Car.h"

class CarMemento{
private:
    Formula1Car* car;
public:
/**
 * @brief accessor for the car attribute. Called by the TeamResources class and returns a formula one car pointer.
 * **/
    Formula1Car* getState();
    /**
     * @brief paramaterized constructor. sets the the car attribute. 
     * @param car used to set the car attribute.
     * **/
    CarMemento(Formula1Car* car);
};

#endif //PROJECT_CARMEMENTO_H
