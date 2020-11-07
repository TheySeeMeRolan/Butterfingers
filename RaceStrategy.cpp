#include "RaceStrategy.h"

vector<Team *> RaceStrategy::race(vector<Team *> teams, Track *track) {
    vector<int> teamScore;
    Team* temp;
    int tempScore,startPosition = 0;
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
            teamScore.push_back(determineTeamRaceScore(teams[i],track->getTotalDifficulty()+i,track->getTotalLength()));
        }
    } else {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
            teamScore.push_back(determineTeamRaceScore(teams[i],track->getTotalDifficulty()+i,track->getTotalLength()));
        }
    }
    for (int i = 0; i < (int)teams.size()-1; ++i) {
        for (int j = 0; j < (int)teams.size()-i-1; ++j) {
            if(teamScore[j] < teamScore[j+1]) {
                tempScore = teamScore[j];
                teamScore[j] = teamScore[j+1];
                teamScore[j+1] = tempScore;
                temp = teams[j];
                teams[j] = teams[j+1];
                teams[j+1] = temp;
            }
        }
    }
    return teams;
}

int RaceStrategy::determineTeamRaceScore(Team* team, int difficulty, int length) {
    int cumulativeTeamScore = length;
//    int driverScore = ((Driver*)team->getDriver())->getSkill() + ((Driver*)team->getDriver())->getLuck();
//    int tyreScore = team->getTyre()->getThread() * difficulty;
//    int engineScore = team->getTeamResources()->getEngine()->getHorsePower() * difficulty + team->getTeamResources()->getEngine()->getTorque() * difficulty;
//    int chasisScore = team->getTeamResources()->getChasis()->getHeight() * difficulty + team->getTeamResources()->getChasis()->getAerodynamicsScore() * difficulty;
//    int electronicScore = team->getTeamResources()->getElectronics()->getEfficiency() * difficulty;
//    int spoilerScore = team->getTeamResources()->getSpoiler()->getWeight() * difficulty + team->getTeamResources()->getSpoiler()->getAerodynamicsScore() * difficulty;

//    if(team->getTyre()->getType() == "soft") {
//        tyreScore += 4;
//    }
//    else if(team->getTyre()->getType() == "medium") {
//        tyreScore += 6;
//    }
//    else {
//        tyreScore += 5;
//    }

//    cumulativeTeamScore += driverScore;
//    cumulativeTeamScore += tyreScore;
//    cumulativeTeamScore += engineScore;
//    cumulativeTeamScore += chasisScore;
//    cumulativeTeamScore += electronicScore;
//    cumulativeTeamScore += spoilerScore;
    return cumulativeTeamScore;
}

RaceStrategy::~RaceStrategy() {

}
