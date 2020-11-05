#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
//#include "Subject.h"
#include <iostream>
#include <string>

//#include "Subject.h"

using namespace std;

class Observer {
protected:
//    Subject* registeredAt;
public:
//    void registerTeam(Subject*);
    virtual void update()=0;
//    Subject* getRegisteredAt();
    Observer();
    virtual ~Observer();
};


#endif //PROJECT_LOGISTICONSERVER_H
