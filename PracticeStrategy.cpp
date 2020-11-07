#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track,vector<vector<int>> tyreSets) {
    //passes the teams vector on to the next day,simply prints out that a practice race is being run
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
        }
    }
    else {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
        }
    }
    return teams;
}

//pure virtual function implementation, minimal functionality
int PracticeStrategy::determineTeamRaceScore(Team*,int, int) {
    return 0;
}

PracticeStrategy::~PracticeStrategy() {}
