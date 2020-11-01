#include "PracticeStrategy.h"
#include "Team.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<<team->getCompany() << " is running a European practice race.\n";
        }
    } else {
        for (auto &team : teams) {
            std::cout<<team->getCompany() << " is running a Non-European practice race.\n";
        }
    }
    return teams;
}

int PracticeStrategy::determineTeamRaceScore(Team*,int, int) {
    return 0;
}
