#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (auto &team : teams) {
//            ((Driver*)team->getDriver())->drive();
        }
    } else {
        for (auto &team : teams) {
//            ((Driver*)team->getDriver())->drive();
        }
    }
    return teams;
}

int PracticeStrategy::determineTeamRaceScore(Team*,int, int) {
    return 0;
}

PracticeStrategy::~PracticeStrategy() {

}
