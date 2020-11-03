//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_PERSONNEL_H
#define PROJECT_PERSONNEL_H
#include "Human.h"

class Personnel: public Human{
public:
    virtual void handleRequest(string s);
//    Personnel();
    Personnel(Team* team, Human * s);
};

#endif //PROJECT_PERSONNEL_H
