#include "QualifyingStrategy.h"

vector<Team *> QualifyingStrategy::race(vector<Team *> teams, Track *track) {
    vector<int> teamScore;
    Team* temp;
    int tempScore;
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
            teamScore.push_back(0);
        }
    } else {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<<i+1<<std::endl;
            teamScore.push_back(0);
        }
    }
    cout<<endl;
    vector<int> teamTyreCount; // represents the ammount of tyres each team has....
    for (int k = 0; k < teams.size() ; ++k) {
        teamTyreCount.push_back(5);
    }

    for (int km = 0; km < track->getTotalLength(); ++km) {
        // teams race sim for a km of the race...
        for (int i = 0; i < teams.size(); ++i) {
            if (teamTyreCount.at(i) > 0 && (km % 60 == 0 || teams[i]->getTeamResources()->getTyre()->getThread() <=0 || teams[i]->getTeamResources()->getTyre()->getThread() <=0)) {
                teams[i]->changeTyre();
                teamTyreCount.at(i)--;
            }
            else if(km % 5 == 0) {
                teams[i]->getTeamResources()->getTyre()->setPressure(teams[i]->getTeamResources()->getTyre()->getPressure()-1); // tyre pressure drops every 5th km
                teams[i]->getTeamResources()->getTyre()->setThread(teams[i]->getTeamResources()->getTyre()->getThread()-1); // tyre pressure drops every 5th km
            }
            teamScore.at(i) += determineTeamRaceScore(teams[i],track->getTotalDifficulty(),track->getTotalLength()-km);
        }
        sort(teams,teamScore,teamTyreCount); // this will sort the teams for every kilometer depending on their score and will swap the tyrecount with them.
    }
    return teams;
}

int QualifyingStrategy::determineTeamRaceScore(Team* team, int difficulty, int length) {
    int cumulativeTeamScore = length;
    int driverScore = team->getDriver().at(0)+team->getDriver().at(1);
    int tyreScore = team->getTeamResources()->getTyre()->getPressure()  + team->getTeamResources()->getTyre()->getThread() ;
    int engineScore = team->getTeamResources()->getEngine()->getHorsePower()  + team->getTeamResources()->getEngine()->getTorque() ;
    int chasisScore = team->getTeamResources()->getChasis()->getHeight()  + team->getTeamResources()->getChasis()->getAerodynamicsScore() ;
    int electronicScore = team->getTeamResources()->getElectronics()->getEfficiency();
    int spoilerScore = team->getTeamResources()->getSpoiler()->getWeight()  + team->getTeamResources()->getSpoiler()->getAerodynamicsScore() ;

    if( team->getTeamResources()->getTyre()->getType() == "soft") {
        tyreScore += 4;
    }
    else if( team->getTeamResources()->getTyre()->getType() == "medium") {
        tyreScore += 6;
    }
    else {
        tyreScore += 5;
    }
    cumulativeTeamScore += (driverScore/difficulty);
    cumulativeTeamScore += (tyreScore/difficulty);
    cumulativeTeamScore += (engineScore/difficulty);
    cumulativeTeamScore += (chasisScore/difficulty);
    cumulativeTeamScore += (electronicScore/difficulty);
    cumulativeTeamScore += (spoilerScore/difficulty);
    return cumulativeTeamScore;
}

vector<Team *> QualifyingStrategy::sort(vector<Team*> teams, vector<int> teamScore,vector<int> &tyreCount) {
    Team* temp;
    int tempTyreCount;
    int tempScore;
    for (int i = 0; i < (int)teams.size()-1; ++i) {
        for (int j = 0; j < (int)teams.size()-1; ++j) {
            if(teamScore[j] < teamScore[j+1]) {
                tempScore = teamScore[j];
                teamScore[j] = teamScore[j+1];
                teamScore[j+1] = tempScore;

                temp = teams[j];
                teams[j] = teams[j+1];
                teams[j+1] = temp;

                tempTyreCount = tyreCount[j];
                tyreCount[j] = tyreCount[j+1];
                tyreCount[j+1] = tempTyreCount;
            }
        }
    }
    return teams;
}


QualifyingStrategy::~QualifyingStrategy() {

}

//    for (int i = 0; i < (int)teams.size()-1; ++i) {
//        for (int j = 0; j < (int)teams.size()-1; ++j) {
//            if(teamScore[j] < teamScore[j+1]) {
//                tempScore = teamScore[j];
//                teamScore[j] = teamScore[j+1];
//                teamScore[j+1] = tempScore;
//                temp = teams[j];
//                teams[j] = teams[j+1];
//                teams[j+1] = temp;
//            }
//        }
//    }