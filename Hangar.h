/**
 * @class Hangar
 * @brief The caretaker participant of the memento design pattern. Used with the testing hierarchy.
 * @author Joanita Nell (u19006812)
 * **/

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
/**
 * @brief method to return the memento stored in this class.
 * **/
    CarMemento* retrieveMemento();
/**
 * @brief method to set the stored attribute of the class.
 * @param car Sets the car paramater to the CarMemento pointer received.
 * **/
    void storeMemento(CarMemento* car);
/**
 * @brief default constructor. No attributes are specified from any paramaters.
 * **/
    Hangar();

/**
 * @brief paramaterized constructor. Set the car attribute. 
 * Equivalent to creating Hangar with the default constructor and then calling storeMemento.
 * @param car Sets the car paramater to the CarMemento pointer received.
 * **/
    Hangar(CarMemento* car);
};

#endif //PROJECT_HANGAR_H
