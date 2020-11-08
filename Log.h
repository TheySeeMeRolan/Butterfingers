/**
 * @class Log
 * @brief Log that keeps track of the seasons points and fixtures as well as displays them
 *
 * @author Rolan Strydom u16002513
 */

#ifndef BUTTERFINGERS_LOG_H
#define BUTTERFINGERS_LOG_H
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <tuple>
#include "Team.h"
using namespace std;

class Log {
public:
    /**
     * Getter for the vector holding all the scores
     * @return vector<int>
     */
    const vector<int> &getScores() const;
    /**
    * Getter for the vector holding all the team names
    * @return vector<string>
    */
    const vector<string> &getTeamNames() const;
    /**
     * Constructor , prints out a construction message and sets all the scores to 0
     */
    Log();
    /**
     * Add all teams to the fixtures
     * @param teams vector of all teams
     */
    void AddTeams(vector<Team*> teams);
    /**
     * Add all scores after a race to the fixtures
     * @param inPoints Scores to add
     */
    void addScores(vector<int> inPoints);

    /**
     * Prints the current standings as per the Log
     */

    void saveBestCarData(tuple<string,int>);
    void printStandings();
    /**
     * Prints the winners of the Drivers Championship
     * Prints the final standings as per the Log
     * Prints the winner of the Constructors championship
     */
    void printFinalStandings();
private:
    vector <int> scores;
    vector <string> teamNames;
    int bestCarScore;
    string companyWithBestCar;



};


#endif //BUTTERFINGERS_LOG_H
