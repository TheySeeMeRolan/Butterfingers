#include "PracticeStrategy.h"

vector<Team *> PracticeStrategy::race(vector<Team *> teams, Track *track,vector<vector<int>> tyreSets) {
    //passes the teams vector on to the next day,simply prints out that a practice race is being run
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            std::cout<<setw(15)<<""<< "(First Driver) ";
            teams[i]->race();
            std::cout << " in position: "<<i+1<<std::endl;
            std::cout<<setw(15)<<""<< "(Second Driver) ";
            teams[i]->race();
            std::cout<<" in position: "<<teams.size()+i+1<<std::endl;
        }
    }
    else {
        for (int i = 0; i < teams.size();i++) {
            std::cout<<setw(15)<<""<< "(First Driver) ";
            teams[i]->race();
            std::cout << " in position: "<<i+1<<std::endl;
            std::cout<<setw(15)<<""<< "(Second Driver) ";
            teams[i]->race();
            std::cout<<" in position: "<<teams.size()+i+1<<std::endl;
        }
    }
    cout<<endl<<setw(30)<<left<<""<<" ======= Race completed =======" <<right<<endl;
    return teams;
}

//pure virtual function implementation, minimal functionality
int PracticeStrategy::determineTeamRaceScore(Team*,int, int) {
    return 0;
}

PracticeStrategy::~PracticeStrategy() {}
