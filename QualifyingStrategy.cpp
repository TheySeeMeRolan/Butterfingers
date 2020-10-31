#include "QualifyingStrategy.h"

vector<Team *> QualifyingStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a European Qualifying race\n";
        }
    } else {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a non-European Qualifying race\n";
        }
    }
    return teams;
}
