#include "QualifyingStrategy.h"

vector<Team *> QualifyingStrategy::race(vector<Team *> teams, Track *track) {
    vector<int> teamScore;
    Team* temp;
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a European Qualifying race\n";
            teamScore.push_back(determineTeamRaceScore(track->getTotalDifficulty(),track->getTotalLength()));
        }
    } else {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a Non-European Qualifying race\n";
        }
    }
    for (int i = 0; i < (int)teams.size()-1; ++i) {
        for (int j = 0; j < (int)teams.size()-i-1; ++j) {
            if(teamScore[j] < teamScore[j+1]) {
                temp = teams[j];
                teams[j] = teams[j+1];
                teams[j+1] = temp;
            }
        }
    }
    return teams;
}

int QualifyingStrategy::determineTeamRaceScore(int, int) {
    return 0;
}
