#include "RaceStrategy.h"

vector<Team *> RaceStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a European RACEDAY\n";
        }
    } else {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a Non-European RACEDAY\n";
        }
    }
    return teams;
}
