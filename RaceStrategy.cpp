#include "RaceStrategy.h"

vector<Team *> RaceStrategy::race(vector<Team *> teams, Track *track, vector<vector<int>> tyreSets) {
    //declaration of variables used within the race function
    vector<int> teamScore; // holds each respective Teams score
    vector<int> teamTyreCount; // represents the ammount of tyres each team has.... will be 5
    Team* temp; // used to sort teams based on their score
    int tempTyreCount; // used to sort the tyres along with the teams
    int tempScore; // used to sort the score along with the teams

    //prints out that a qualifying race is run
    // each team starts with a starting position score(indicating that starting position in a race affect placing
    if(track->isEuropean()) {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<< " in position: "<<i+1<<std::endl;
            teamScore.push_back(teams.size()-i);
        }
    }
    else {
        for (int i = 0; i < teams.size();i++) {
            teams[i]->race();
            std::cout<< " in position: "<<i+1<<std::endl;
            teamScore.push_back(teams.size()-i);
        }
    }

    cout<<endl;

    //adds the amount of tyres each teams has, wil be 5
    for (int k = 0; k < teams.size() ; ++k) {
        teamTyreCount.push_back(5);
    }

    // simulates the race per kilometer of the track
    for (int km = 0; km < track->getTotalLength(); ++km) {
        // teams race sim for a km of the race...
        for (int i = 0; i < teams.size(); ++i) {
            // a team will change tyres if their tyreCount is greater than 5
            // AND
            // every 60 km's
            // OR
            // the tyres thread has been warn out
            // OR
            // the tyres pressure has dropped to much
            if (teamTyreCount.at(i) > 0 && (km % 60 == 0 || teams[i]->getTeamResources()->getTyre()->getThread() <=0 || teams[i]->getTeamResources()->getTyre()->getThread() <=0)) {
                teamTyreCount.at(i)--;
                for (int j = 0; j < 3; ++j) {
                    if(tyreSets.at(i).at(j) > 0) {
                        //will change to soft tyres if they have soft tyres available and decrement the amount of soft tyres and total tyres they have left
                        if(j==0) { //set to soft
                            teams[i]->changeTyre();
                            cout << "soft tyres." << endl;
                            teams[i]->getTeamResources()->getCar(true)->getTyres()->setTyreType("soft");
                            tyreSets.at(i).at(j)--;
                            teamTyreCount.at(i)--;
                        }
                        //will change to medium tyres if they have soft tyres available and decrement the amount of soft tyres and total tyres they have left
                        else if(j==1) {
                            teams[i]->changeTyre();
                            cout << "medium tyres." << endl;
                            teams[i]->getTeamResources()->getCar(true)->getTyres()->setTyreType("medium");
                            tyreSets.at(i).at(j)--;
                            teamTyreCount.at(i)--;
                        }
                        //will change to hard tyres if they have soft tyres available and decrement the amount of soft tyres and total tyres they have left
                        else {
                            teams[i]->changeTyre();
                            cout << "hard tyres." << endl;
                            teams[i]->getTeamResources()->getCar(true)->getTyres()->setTyreType("hard");
                            tyreSets.at(i).at(j)--;
                            teamTyreCount.at(i)--;
                        }
                        break;
                    }
                }
            }
            //if the pitcrew does not change the tyres the tyres pressure and threads drop every 5km's
            else if(km % 5 == 0) {
                teams[i]->getTeamResources()->getTyre()->setPressure(teams[i]->getTeamResources()->getTyre()->getPressure()-1); // tyre pressure drops every 5th km
                teams[i]->getTeamResources()->getTyre()->setThread(teams[i]->getTeamResources()->getTyre()->getThread()-1); // tyre pressure drops every 5th km
            }
            //detemines the team's score per kilometer run
            teamScore.at(i) += determineTeamRaceScore(teams[i],track->getTotalDifficulty(),track->getTotalLength()-km);
        }
    }
    //sorts the team form the most score to the least score
    //this team sort will indicate the starting position for the final race
    for (int i = 0; i < (int)teams.size()-1; ++i) {
        for (int j = 0; j < (int) teams.size() - 1; ++j) {
            if (teamScore[j] < teamScore[j + 1]) {
                tempScore = teamScore[j];
                teamScore[j] = teamScore[j + 1];
                teamScore[j + 1] = tempScore;

                temp = teams[j];
                teams[j] = teams[j + 1];
                teams[j + 1] = temp;

                tempTyreCount = teamTyreCount[j];
                teamTyreCount[j] = teamTyreCount[j+1];
                teamTyreCount[j+1] = tempTyreCount;
            }
        }
    }

    return teams;
}

int RaceStrategy::determineTeamRaceScore(Team* team, int difficulty, int length) {
    // each team starts with a cumulative score of length * difficuly, the random is applied to introduce variability
    int cumulativeTeamScore = length*difficulty*rand();
    // each team has a driver score which is the drivers skill level * the drivers luck(luck acts as a multiplier)
    int driverScore = team->getDriver().at(0)*team->getDriver().at(1);
    // each team will get a tyreScore depending on the state of the tyres pressure and thread(which will wear out as the race progresses)
    int tyreScore = team->getTeamResources()->getTyre()->getPressure()  + team->getTeamResources()->getTyre()->getThread();
    // each team will get an engineScore based on their car's engine's horsepower and torque
    int engineScore = team->getTeamResources()->getEngine()->getHorsePower()  + team->getTeamResources()->getEngine()->getTorque();
    // each team will get an chasisScore based on their car's chasis and its height setting and aerodynamicsScore
    int chasisScore = team->getTeamResources()->getChasis()->getHeight()  + team->getTeamResources()->getChasis()->getAerodynamicsScore();
    // each team will get an electronicsScore based on their car's electronics setting
    int electronicScore = team->getTeamResources()->getElectronics()->getEfficiency();
    // each team will get a spoilerScoer based on their car's spoilers weight and aerodynamicsScore
    int spoilerScore = team->getTeamResources()->getSpoiler()->getWeight()  + team->getTeamResources()->getSpoiler()->getAerodynamicsScore() ;

    // type of tyres gets scored
    if( team->getTeamResources()->getTyre()->getType() == "soft") {
        tyreScore += 18;
    }
    else if( team->getTeamResources()->getTyre()->getType() == "medium") {
        tyreScore += 12;
    }
    else {
        tyreScore += 6;
    }

    // the different scores get added to the cumulativeScore
    // each score gets divided by the difficulty, difficulty acts as a debuff
    cumulativeTeamScore += (driverScore/difficulty);
    cumulativeTeamScore += (tyreScore/difficulty);
    cumulativeTeamScore += (engineScore/difficulty);
    cumulativeTeamScore += (chasisScore/difficulty);
    cumulativeTeamScore += (electronicScore/difficulty);
    cumulativeTeamScore += (spoilerScore/difficulty);

    //remoaval of rand to reduce variability to get the best results based on the stats of the car
    return cumulativeTeamScore;
}

RaceStrategy::~RaceStrategy() {}
