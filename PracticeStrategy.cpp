#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track) {
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
        }
    } else {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
        }
    }
    return teams;
}

int PracticeStrategy::determineTeamRaceScore(Team*,int, int) {
    return 0;
}

PracticeStrategy::~PracticeStrategy() {

}
