#ifndef PROJECT_LOGISTICONSERVER_H
#define PROJECT_LOGISTICONSERVER_H
#include <iostream>
#include <string>

using namespace std;

class Observer {

public:
    virtual void update()=0;
    Observer();
    virtual ~Observer();
};


#endif //PROJECT_LOGISTICONSERVER_H
