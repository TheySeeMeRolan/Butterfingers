#ifndef PROJECT_HUMAN_H
#define PROJECT_HUMAN_H

// #include "Team.h"
class Team;
class Human{
private:
    Team* team;
    Human* successor;
public:
    virtual void handleRequest();
    Human();
    Human(Team* team);
    virtual ~Human();
};

#endif //PROJECT_HUMAN_H
