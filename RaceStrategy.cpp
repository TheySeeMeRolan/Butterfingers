#include "RaceStrategy.h"
#include "Team.h"

vector<Team *> RaceStrategy::race(vector<Team *> teams, Track *track) {
    vector<int> teamScore;
    Team* temp;
    int startPosition = 0;
    if(track->isEuropean()) {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a European Qualifying race\n";
            teamScore.push_back(determineTeamRaceScore(team,track->getTotalDifficulty(),track->getTotalLength())-startPosition);
            startPosition++;
        }
    } else {
        for (auto &team : teams) {
            std::cout<< team->getCompany() << " is running a Non-European Qualifying race\n";
            teamScore.push_back(determineTeamRaceScore(team,track->getTotalDifficulty()+1,track->getTotalLength())-startPosition);
            startPosition++;
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

int RaceStrategy::determineTeamRaceScore(Team* team, int difficulty, int length) {
    int teamScore = length;
    int tyreScore = team->getTyre()->getThread() * difficulty;
    int engineScore = team->getEngine()->getHorsePower() * difficulty + team->getEngine()->getTorque() * difficulty;
    int chasisScore = team->getChasis()->getHeight() * difficulty + team->getChasis()->getAerodynamicsScore() * difficulty;
    int electronicScore = team->getElectronics()->getEfficiency() * difficulty;
    int spoilerScore = team->getSpoiler()->getWeight() * difficulty + team->getSpoiler()->getAerodynamicsScore() * difficulty;

    if(team->getTyre()->getType() == "soft") {
        tyreScore += 4;
    }
    else if(team->getTyre()->getType() == "medium") {
        tyreScore += 6;
    }
    else {
        tyreScore += 5;
    }

    teamScore += tyreScore;
    teamScore += engineScore;
    teamScore += chasisScore;
    teamScore += electronicScore;
    teamScore += spoilerScore;
    return teamScore;
}