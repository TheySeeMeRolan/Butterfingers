//
// Created by Joanita on 2020/10/27.
//

#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
#include "Subject.h"
//class Subject;
#include <iostream>
#include <string>

using namespace std;

class LogisticObserver {
protected:
    Subject* registeredAt;
public:
    void registerTeam(Subject*);
    virtual void update()=0;
    LogisticObserver();
    virtual ~LogisticObserver();
};


#endif //PROJECT_LOGISTICONSERVER_H
