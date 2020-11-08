/**
 * @class Equipment
 * @brief Simple holder classs that is used to save team equipment that needs to be shipped to races
 * @author Rolan Strydom u16002513
 */
#ifndef PROJECT_EQUIPMENT_H
#define PROJECT_EQUIPMENT_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Equipment{
private:
    /**
     * vector of strings that represents equipment items
     */
    vector<string> allEquipment;

public:
    /**
     * Function that adds more equipment items
     * @param equipment What you wish to add
     */
    void add(string equipment)
    {
        allEquipment.push_back(equipment);
    };

    /**
     * Constructor that takes a premade string vector
     * @param aEquipment Vector of strings to represent equipment needed
     */
    Equipment(vector<string> aEquipment)
    {
        this->allEquipment=aEquipment;
    }};


#endif //PROJECT_EQUIPMENT_H
