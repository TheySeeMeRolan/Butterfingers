//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_PERSONNEL_H
#define PROJECT_PERSONNEL_H
#include "Human.h"

class Personnel: public Human{
public:
    void handleRequest();
    Personnel();
    Personnel(Team* team);
};

#endif //PROJECT_PERSONNEL_H
