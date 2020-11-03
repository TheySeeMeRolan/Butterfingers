//
// Created by Joanita on 2020/10/28.
//

#ifndef PROJECT_ENGINEERING_H
#define PROJECT_ENGINEERING_H

#include "Human.h"

class Engineering: public Human{
public:
    virtual void handleRequest();
//    Engineering();
    Engineering(Team* team, Human * s);
};
#endif //PROJECT_ENGINEERING_H
