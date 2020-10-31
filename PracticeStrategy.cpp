#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<<team->getCompany() << " is running a European practice race.\n"
//            team->strategise(); //will have to ask if you would want to
        }
    } else {
        for (auto &team : teams) {
            std::cout<<team->getCompany() << " is running a Non-European practice race.\n"
//            team->strategise(); //will have to ask if you would want to
        }
    }
    return teams;
}
