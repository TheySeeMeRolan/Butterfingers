//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_EQUIPMENT_H
#define PROJECT_EQUIPMENT_H

#include <string>
#include <iostream>

using namespace std;

class Equipment{
private:
    string name;
public:
    void add(Equipment* equipment);
    void remove(Equipment* equipment);
    void equip();
    Equipment();
    Equipment(string name);
};

#endif //PROJECT_EQUIPMENT_H
