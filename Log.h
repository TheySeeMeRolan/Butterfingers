//
// Created by ro on 2020/11/07.
//

#ifndef BUTTERFINGERS_LOG_H
#define BUTTERFINGERS_LOG_H
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>



#include <Team.h>
using namespace std;

class Log {
public:
    const vector<int> &getScores() const;
    const vector<string> &getTeamNames() const;
    Log();
    void AddTeams(vector<Team*>);
    void addScores(vector<int>);
    void printStandings();
    void printFinalStandings();
private:
    vector <int> scores;
    vector <string> teamNames;



};


#endif //BUTTERFINGERS_LOG_H
