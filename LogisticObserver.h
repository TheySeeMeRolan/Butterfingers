#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
//#include "Subject.h"
#include <iostream>
#include <string>

class Subject;

using namespace std;

class LogisticObserver {
protected:
    Subject* registeredAt;
public:
    void registerTeam(Subject*);
    virtual void update()=0;
    Subject* getRegisteredAt();
    LogisticObserver();
    virtual ~LogisticObserver();
};


#endif //PROJECT_LOGISTICONSERVER_H
