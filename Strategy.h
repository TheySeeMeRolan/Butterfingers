/**
 * @class Strategy
 * @brief Abstract class.
 *
 * Abstract class serves as the interface class for the Strategy design pattern.
 * Has the pure virtual functions for the PractiveStrategy, QualifyingStrategy and RaceStrategy.
 *
 * @author Janlu Pretorius u16014520
 *
 */

#ifndef PROJECT_STRATEGY_H
#define PROJECT_STRATEGY_H

//functionality includes
#include "Track.h"
#include "Team.h"

#include <iostream>
#include <string>
#include <vector>

class Team;
using namespace std;

class Strategy{
public:
    /**
     * @brief executes the various race strategise.
     * Pure virtual algorithm() of the Strategy design pattern.
     * @param team vector of all the teams participating in the race.
     * @param track pointer to the Track the race is being run on.
     * @return vector of teams in the potion they placed.
     */
    virtual vector<Team*> race(vector<Team*> team, Track* track,vector<vector<int>>)=0;

    /**
     * @brief Helper function to determine each teams score per kilometer of race run.
     * @return integer of the score a team achieved in a kilometer.
     */
    virtual int determineTeamRaceScore(Team*,int, int)=0;

    /**
     * @brief virtual destructor
     * Ensures that the base class Strategy is destroyed after the derived classes.
     */
    virtual ~Strategy(){};
};

#endif //PROJECT_STRATEGY_H
