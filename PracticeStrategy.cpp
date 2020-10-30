#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> team, Track *track) {
    if(track->isEuropean()) {
        for (int i = 0; i < 10; ++i) {
            team[i]->getChasis();
        }
    } else {

    }
    return team;
}
