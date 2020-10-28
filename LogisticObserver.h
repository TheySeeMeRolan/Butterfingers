//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
#include "Subject.h"

#include <iostream>
#include <string>

using namespace std;

class LogisticObserver {
private:
    Subject* registeredAt;
public:
    void registerTeam(Subject*);
    virtual void update()=0;
    LogisticObserver();
    LogisticObserver(Subject* s);
    virtual ~LogisticObserver();
};


#endif //PROJECT_LOGISTICONSERVER_H
